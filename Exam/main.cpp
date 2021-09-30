#include "Header.h"


//Екзаменаційне завдання «Основи програмування на С ++» Версія 1.0.0
//четверте завдання
//Створіть гру «Пам'ять».
//Головні особливості реалізації гри:
//Вибір розміру поля.
//Початкова розстановка карт виконується комп'ютером.
//Звуковий супровід гри:
//Якщо карти співпали, звучить один звук;
// Якщо карти не співпали, звучить інший звук.
// Статистика:
//Час гри;
//Кількість переворотів карт.


int main() {
	setlocale(LC_ALL, "Ukrainian");
	srand(unsigned(time(0)));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int start = clock(); // Засікаємо час старту 
	char base[18] = { '#','@','$','%','&','!','?', '<','>','w', '~', '[', ']', '(', ')', '№', '*','P' };
	int rows = 0, cols = 0;
	const int m = 16, n = 16;
	char ar[m][n];
	int quantity1 = 0, quantity2 = 0, quantity3 = 0;
	//Заповнюємо нулями початковий масив
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			ar[i][j] = '0';
	}
	/*for (int i = 0; i < m; i++) {
	for (int j = 0; j < n; j++) {
		cout << setw(5) << ar[i][j];
	}
	cout << "\n";
}*/
	int answer = 0;
	char choice;
	do {
		cout << "____________________________________________________________________________________" << endl;
		cout << "Виберіть розмір поля для гри:" << endl;
		cout << "1 - 2x2" << "\n";
		cout << "2 - 4x4" << "\n";
		cout << "3 - 6x6" << "\n";
		cout << "0 - Вихід" << endl;;
		cout << "____________________________________________________________________________________" << endl;
		cout << "Зробiть ваш вибiр: ";
		cin >> answer;
		if (answer) {
			switch (answer) {
			case 1:
				rows = 2;
				cols = 2;
				quantity1 = Func(base, ar, rows, cols);
				cout << endl << "____________________________________________________________________________________" << endl;
				cout << "\nЧи бажаєте ще щось? Введiть \"y\", якщо так або \"n\", якщо нi.\n";
				cin >> choice;
				break;
			case 2:
				rows = 4;
				cols = 4;
				quantity2 = Func(base, ar, rows, cols);
				cout << endl << "____________________________________________________________________________________" << endl;
				cout << "\nЧи бажаєте ще щось? Введiть \"y\", якщо так або \"n\", якщо нi.\n";
				cin >> choice;
				break;
			case 3:
				rows = 6;
				cols = 6;
				quantity3 = Func(base, ar, rows, cols);
				cout << endl << "____________________________________________________________________________________" << endl;
				cout << "\nЧи бажаєте ще щось? Введiть \"y\", якщо так або \"n\", якщо нi.\n";
				cin >> choice;
				break;
			default:
				cout << "Не правильний вибiр! Спробуйте ще раз!\n";
				choice = 'y';
				break;
			}
		}
		else {
			cout << "Дякуємо за ваш вибір.\n";
			break;
		}
	} while (choice != 'n');

	cout << endl;

	cout << endl;
	cout << "Статистика:" << endl;
	if (quantity1 != 0) {
		cout << "Ви перевертали карти на полі 2x2 таку кількість разів: ";
		cout << quantity1;
		cout << endl;
	}
	if (quantity2 != 0) {
		cout << "Ви перевертали карти на полі 4x4 таку кількість разів: ";
		cout << quantity2;
		cout << endl;
	}
	if (quantity3 != 0) {
		cout << "Ви перевертали карти на полі 6x6 таку кількість разів: ";
		cout << quantity3;
		cout << endl;
	}

	int end = clock(); // засікаємо час закінчення гри
	int t = (end - start) / CLOCKS_PER_SEC;// команда CLOCKS_PER_SEC потрібна дляпереводу результату функції clock в секунди
	int h1 = 0, m1 = 0, s1 = 0;
	//	cout << " " << t << endl; 
	s1 = t;
	if (t > 60) {
		m1 = t / 60;
		s1 = t - 60 * m1;
		if (m1 > 60) {
			h1 = m1 / 60;
			m1 = m1 - 60 * h1;
		}
	}
	
	cout << "Час гри: " << "\n";
	cout << h1 << " год " << m1 << " хв. " << s1 << " секунд" << "\n";// вивід результатут роботи на екран
	cin.get(); // чекаємо натискання клавіші користувачем.
	cout << "Д";
	Beep(247, 500);
	cout << "я";
	Beep(417, 500);
	cout << "к";
	Beep(417, 500);
	cout << "у";
	Beep(370, 500);
	cout << "є";
	Beep(417, 500);
	cout << "м";
	Beep(329, 500);
	cout << "о";
	Beep(247, 500);
	cout << " ";
	Beep(247, 500);
	cout << "з";
	Beep(247, 500);
	cout << "а";
	Beep(417, 500);
	cout << " ";
	Beep(417, 500);
	cout << "г";
	Beep(370, 500);
	cout << "р";
	Beep(417, 500);
	cout << "у";
	Beep(497, 500);
	cout << "!";
	Sleep(500);
	Beep(497, 500);
	cout << " ";
	Beep(277, 500);
	cout << "Д";
	Beep(277, 500);
	cout << "о ";
	Beep(440, 500);
	cout << "п";
	Beep(440, 500);
	cout << "о";
	Beep(417, 500);
	cout << "б";
	Beep(370, 500);
	cout << "а";
	Beep(329, 500);
	cout << "ч";
	Beep(247, 500);
	cout << "е";
	Beep(417, 500);
	cout << "н";
	Beep(417, 500);
	cout << "н";
	Beep(370, 500);
	cout << "я";
	Beep(417, 500);
	cout << "!";
	Beep(329, 500);
	cout << endl;
	return 0;
}