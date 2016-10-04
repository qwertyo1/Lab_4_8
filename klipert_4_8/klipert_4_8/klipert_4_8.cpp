// Lab_2_8.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "������� ���������� ����� � �������: ";
	int n;
	cin >> n;
	pses *projects = new pses[n];
	for (int i = 0; i < n; i++) {
		cout << "  [" << i << "] ���: ";
		int year = 0;
		cin >> year;
		cout << "  [" << i << "] ������� ������������: ";
		char* adviser = new char;
		cin >> adviser;
		cout << "  [" << i << "] ������� ������� (�): ";
		int dia = 0;
		cin >> dia;
		cout << "  [" << i << "] ������� ������� (���): ";
		int clockRate = 0;
		cin >> clockRate;
		projects[i].setData(year, adviser, dia, clockRate);
	}
	cout << " |  ���  |  ������� ������������  |  ������� ������� (�)  |  ������� ������� (���)  | " << endl;
	for (int i = 0; i < n; i++) {
		projects[i].showData();
	}

	int f, s = 0;
	cout << endl << "������� ������ ����� ��� ��������� " << endl << "  ����� ������ ������: ";
	cin >> f;
	cout << "  ����� ������ ������: ";
	cin >> s;
	if (projects[f] == projects[s]) {
		cout << "  ������ ������ �����" << endl;
	}
	else {
		cout << "  ������ ������ �� �����" << endl;
	}
	projects[s] = projects[n];
	projects[n].showData();
	system("pause");
	delete[]projects;
	return 0;
}

