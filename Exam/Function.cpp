#include "Header.h"



int Func(char base[], char ar[][16], int rows, int cols) {
	//char s;
	int k;//����� ��� ��������� �������� �������� ������
	k = 0;
	int count = 0;
	int i = 0, j = 0;//�������� ������ ��������� ������
	int w = 1, q = 1; //���� ��� ���������� ���� � ������ (��� �������� �����������)
	int ch_i1 = 15, ch_j1 = 15, ch_i2 = 14, ch_j2 = 14;//������ ���� �� ���������� � �� ��������
	int correct = 0;
	int quantity = 0;
	//���������� ����������� ������� �������� ������
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
	// ���������� ����� �������� ������
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
		// � � � � �!!!!!!!!!!!!!!!!!!!!!!!
		for (int j = 0; j < cols; j++) {
			//cout << setw(5) << ar[i][j]; 
			cout << setw(5) << "X";// ��� ������������ ������������ ����� ��� ����� �����������, � �������� �������

		}
		cout << "\n";
	}

	do {
		cout << endl;
		cout << "������� 2 �����!" << endl;
		do {
			cout << "����� �� ���������� ����� �����: ";
			cin >> ch_i1;
			cout << "����� �� �������� ����� �����: ";
			cin >> ch_j1;
			if (ar[ch_i1 - 1][ch_j1 - 1] == ' ') {
				cout << (char)7;
				cout << endl << "������� �����, ��������� �� ���!" << endl;
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
		//cout << "������� ���� �����" << ar[ch_i1-1][ch_j1-1] << endl;
		do {
			cout << "����� �� ���������� ����� �����: ";
			cin >> ch_i2;
			cout << "����� �� �������� ����� �����: ";
			cin >> ch_j2;
			if (ar[ch_i2 - 1][ch_j2 - 1] == ' ' || (ch_i2 == ch_i1 && ch_j2 == ch_j1)) {
				cout << (char)7;
				cout << endl << "������� �����, ��������� �� ���!" << endl;
			}
		} while (ar[ch_i2 - 1][ch_j2 - 1] == ' ' || (ch_i2 == ch_i1 && ch_j2 == ch_j1));
		cout << endl;
		//cout << "������� ���� �����" << ar[ch_i2-1][ch_j2-1] << endl;

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
			Beep(247, 200);//������ ��� ������� ���� ���������� ������ 2 ����� (����� �. ������)
			Beep(247, 200);
			Beep(247, 200);
			Beep(417, 200);
			Beep(247, 200);
			Beep(370, 400);
			cout << "�� �������!" << endl;
			ar[ch_i1 - 1][ch_j1 - 1] = ' ';
			ar[ch_i2 - 1][ch_j2 - 1] = ' ';
			correct++;
			quantity++;
		}
		else {
			Beep(370, 400);
			Beep(370, 400);
			//cout << (char)7;//������ ������� (���������� �� ������)
			cout << "�� �� �������, ��������� ��" << endl;
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