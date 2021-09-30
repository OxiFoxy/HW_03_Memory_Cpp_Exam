#include "Header.h"



int Func(char base[], char ar[][16], int rows, int cols) {
	//char s;
	int k;//змінна для нумерації елементів базового масиву
	k = 0;
	int count = 0;
	int i = 0, j = 0;//порядкові номери основного масиву
	int w = 1, q = 1; //змінні для візуалізації поля в консолі (для зручності користувача)
	int ch_i1 = 15, ch_j1 = 15, ch_i2 = 14, ch_j2 = 14;//номера карт по горизонталі і по вертикалі
	int correct = 0;
	int quantity = 0;
	//Заповнюємо випадковими числами половину масиву
	while (count < rows * rows / 2) {
		i = rand() % cols + 0;
		j = rand() % cols + 0;
		if (ar[i][j] == '0') {
			ar[i][j] = base[k];
			k++;
			count++;
		}
	}
	k = 0;
	count = 0;
	// заповнюємо другу половину масиву
	while (count < rows * rows / 2) {
		i = rand() % cols + 0;
		j = rand() % cols + 0;
		if (ar[i][j] == '0') {
			ar[i][j] = base[k];
			k++;
			count++;
		}
	}

	cout << setw(8) << q;
	q++;
	for (int i = 0; i < rows - 1; i++) {
		cout << setw(5) << q;
		q++;
	}
	cout << endl << "   ______________________________" << endl;
	for (int i = 0; i < rows; i++) {
		cout << w << " |";
		w++;
		// У В А Г А!!!!!!!!!!!!!!!!!!!!!!!
		for (int j = 0; j < cols; j++) {
			//cout << setw(5) << ar[i][j]; 
			cout << setw(5) << "X";// щоб висвітлювався неприхований масив цей рядок закоментити, а попердній відкрити

		}
		cout << "\n";
	}

	do {
		cout << endl;
		cout << "Виберіть 2 карти!" << endl;
		do {
			cout << "Номер по горизонталі першої карти: ";
			cin >> ch_i1;
			cout << "Номер по вертикалі першої карти: ";
			cin >> ch_j1;
			if (ar[ch_i1 - 1][ch_j1 - 1] == ' ') {
				cout << (char)7;
				cout << endl << "Помилка вводу, спробуйте ще раз!" << endl;
			}
		} while (ar[ch_i1 - 1][ch_j1 - 1] == ' ');
		cout << endl;
		w = 1;
		q = 1;
		cout << setw(8) << q;
		q++;
		for (int i = 0; i < rows - 1; i++) {
			cout << setw(5) << q;
			q++;
		}
		cout << endl << "   ______________________________" << endl;
		for (int i = 0; i < rows; i++) {
			cout << w << " |";
			w++;
			for (int j = 0; j < cols; j++) {

				if (i == (ch_i1 - 1) && j == (ch_j1 - 1))
					cout << setw(5) << ar[i][j];
				else
					if (ar[i][j] == ' ')
						cout << setw(5) << " ";
					else {
						cout << setw(5) << "X";
					}

			}
			cout << "\n";
		}
		cout << endl;
		//cout << "вибрана вами карта" << ar[ch_i1-1][ch_j1-1] << endl;
		do {
			cout << "Номер по горизонталі другої карти: ";
			cin >> ch_i2;
			cout << "Номер по вертикалі другої карти: ";
			cin >> ch_j2;
			if (ar[ch_i2 - 1][ch_j2 - 1] == ' ' || (ch_i2 == ch_i1 && ch_j2 == ch_j1)) {
				cout << (char)7;
				cout << endl << "Помилка вводу, спробуйте ще раз!" << endl;
			}
		} while (ar[ch_i2 - 1][ch_j2 - 1] == ' ' || (ch_i2 == ch_i1 && ch_j2 == ch_j1));
		cout << endl;
		//cout << "вибрана вами карта" << ar[ch_i2-1][ch_j2-1] << endl;

		w = 1;
		q = 1;
		cout << setw(8) << q;
		q++;
		for (int i = 0; i < rows - 1; i++) {
			cout << setw(5) << q;
			q++;
		}
		cout << endl << "   ______________________________" << endl;
		for (int i = 0; i < rows; i++) {
			cout << w << " |";
			w++;
			for (int j = 0; j < cols; j++) {

				if (i == (ch_i1 - 1) && j == (ch_j1 - 1))
					cout << setw(5) << ar[i][j];
				else
					if (i == (ch_i2 - 1) && j == (ch_j2 - 1))
						cout << setw(5) << ar[i][j];
					else
						if (ar[i][j] == ' ')
							cout << setw(5) << " ";
						else {
							//if (ar[i][j]!=' '&& ar[i][j] != ar[ch_i2 - 1][ch_j2 - 1] && ar[i][j] == ar[ch_i1 - 1][ch_j1 - 1])
							cout << setw(5) << "X";
						}
			}
			cout << "\n";
		}
		cout << endl;
		if (ar[ch_i1 - 1][ch_j1 - 1] == ar[ch_i2 - 1][ch_j2 - 1]) {
			Beep(247, 200);//музика яка звучить коли користувач вгадав 2 карти (автор О. Музика)
			Beep(247, 200);
			Beep(247, 200);
			Beep(417, 200);
			Beep(247, 200);
			Beep(370, 400);
			cout << "Ви вгадали!" << endl;
			ar[ch_i1 - 1][ch_j1 - 1] = ' ';
			ar[ch_i2 - 1][ch_j2 - 1] = ' ';
			correct++;
			quantity++;
		}
		else {
			Beep(370, 400);
			Beep(370, 400);
			//cout << (char)7;//сигнал помилки (користувач не вгадав)
			cout << "Ви не вгадали, спробуйте ще" << endl;
			quantity++;
		}

		w = 1;
		q = 1;
		cout << setw(8) << q;
		q++;
		for (int i = 0; i < rows - 1; i++) {
			cout << setw(5) << q;
			q++;
		}
		cout << endl << "   ______________________________" << endl;
		for (int i = 0; i < rows; i++) {
			cout << w << " |";
			w++;
			for (int j = 0; j < cols; j++) {
				if (ar[i][j] == ' ')
					cout << setw(5) << ar[i][j];
				if (ar[i][j] != ' ')
					cout << setw(5) << "X";
			}
			cout << "\n";
		}
	} while (correct != rows * rows / 2);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			ar[i][j] = '0';
	}
	return quantity;
}