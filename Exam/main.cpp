#include "Header.h"


//������������� �������� ������� ������������� �� � ++� ����� 1.0.0
//�������� ��������
//������� ��� ����'����.
//������ ���������� ��������� ���:
//���� ������ ����.
//��������� ����������� ���� ���������� ����'������.
//�������� ������� ���:
//���� ����� �������, ������� ���� ����;
// ���� ����� �� �������, ������� ����� ����.
// ����������:
//��� ���;
//ʳ������ ���������� ����.


int main() {
	setlocale(LC_ALL, "Ukrainian");
	srand(unsigned(time(0)));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int start = clock(); // ������� ��� ������ 
	char base[18] = { '#','@','$','%','&','!','?', '<','>','w', '~', '[', ']', '(', ')', '�', '*','P' };
	int rows = 0, cols = 0;
	const int m = 16, n = 16;
	char ar[m][n];
	int quantity1 = 0, quantity2 = 0, quantity3 = 0;
	//���������� ������ ���������� �����
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
		cout << "������� ����� ���� ��� ���:" << endl;
		cout << "1 - 2x2" << "\n";
		cout << "2 - 4x4" << "\n";
		cout << "3 - 6x6" << "\n";
		cout << "0 - �����" << endl;;
		cout << "____________________________________________________________________________________" << endl;
		cout << "����i�� ��� ���i�: ";
		cin >> answer;
		if (answer) {
			switch (answer) {
			case 1:
				rows = 2;
				cols = 2;
				quantity1 = Func(base, ar, rows, cols);
				cout << endl << "____________________________________________________________________________________" << endl;
				cout << "\n�� ������ �� ����? ����i�� \"y\", ���� ��� ��� \"n\", ���� �i.\n";
				cin >> choice;
				break;
			case 2:
				rows = 4;
				cols = 4;
				quantity2 = Func(base, ar, rows, cols);
				cout << endl << "____________________________________________________________________________________" << endl;
				cout << "\n�� ������ �� ����? ����i�� \"y\", ���� ��� ��� \"n\", ���� �i.\n";
				cin >> choice;
				break;
			case 3:
				rows = 6;
				cols = 6;
				quantity3 = Func(base, ar, rows, cols);
				cout << endl << "____________________________________________________________________________________" << endl;
				cout << "\n�� ������ �� ����? ����i�� \"y\", ���� ��� ��� \"n\", ���� �i.\n";
				cin >> choice;
				break;
			default:
				cout << "�� ���������� ���i�! ��������� �� ���!\n";
				choice = 'y';
				break;
			}
		}
		else {
			cout << "������ �� ��� ����.\n";
			break;
		}
	} while (choice != 'n');

	cout << endl;

	cout << endl;
	cout << "����������:" << endl;
	if (quantity1 != 0) {
		cout << "�� ����������� ����� �� ��� 2x2 ���� ������� ����: ";
		cout << quantity1;
		cout << endl;
	}
	if (quantity2 != 0) {
		cout << "�� ����������� ����� �� ��� 4x4 ���� ������� ����: ";
		cout << quantity2;
		cout << endl;
	}
	if (quantity3 != 0) {
		cout << "�� ����������� ����� �� ��� 6x6 ���� ������� ����: ";
		cout << quantity3;
		cout << endl;
	}

	int end = clock(); // ������� ��� ��������� ���
	int t = (end - start) / CLOCKS_PER_SEC;// ������� CLOCKS_PER_SEC ������� ����������� ���������� ������� clock � �������
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
	
	cout << "��� ���: " << "\n";
	cout << h1 << " ��� " << m1 << " ��. " << s1 << " ������" << "\n";// ���� ����������� ������ �� �����
	cin.get(); // ������ ���������� ������ ������������.
	cout << "�";
	Beep(247, 500);
	cout << "�";
	Beep(417, 500);
	cout << "�";
	Beep(417, 500);
	cout << "�";
	Beep(370, 500);
	cout << "�";
	Beep(417, 500);
	cout << "�";
	Beep(329, 500);
	cout << "�";
	Beep(247, 500);
	cout << " ";
	Beep(247, 500);
	cout << "�";
	Beep(247, 500);
	cout << "�";
	Beep(417, 500);
	cout << " ";
	Beep(417, 500);
	cout << "�";
	Beep(370, 500);
	cout << "�";
	Beep(417, 500);
	cout << "�";
	Beep(497, 500);
	cout << "!";
	Sleep(500);
	Beep(497, 500);
	cout << " ";
	Beep(277, 500);
	cout << "�";
	Beep(277, 500);
	cout << "� ";
	Beep(440, 500);
	cout << "�";
	Beep(440, 500);
	cout << "�";
	Beep(417, 500);
	cout << "�";
	Beep(370, 500);
	cout << "�";
	Beep(329, 500);
	cout << "�";
	Beep(247, 500);
	cout << "�";
	Beep(417, 500);
	cout << "�";
	Beep(417, 500);
	cout << "�";
	Beep(370, 500);
	cout << "�";
	Beep(417, 500);
	cout << "!";
	Beep(329, 500);
	cout << endl;
	return 0;
}