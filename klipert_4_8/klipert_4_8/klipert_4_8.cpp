// Lab_2_8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Укажите количество строк в таблице: ";
	int n;
	cin >> n;
	pses *projects = new pses[n];
	for (int i = 0; i < n; i++) {
		cout << "  [" << i << "] Год: ";
		int year = 0;
		cin >> year;
		cout << "  [" << i << "] Научный руководитель: ";
		char* adviser = new char;
		cin >> adviser;
		cout << "  [" << i << "] Диаметр антенны (м): ";
		int dia = 0;
		cin >> dia;
		cout << "  [" << i << "] Рабочая частота (МГц): ";
		int clockRate = 0;
		cin >> clockRate;
		projects[i].setData(year, adviser, dia, clockRate);
	}
	cout << " |  Год  |  Научный руководитель  |  Диаметр антенны (м)  |  Рабочая частота (МГц)  | " << endl;
	for (int i = 0; i < n; i++) {
		projects[i].showData();
	}

	int f, s = 0;
	cout << endl << "Укажите номера строк для сравнения " << endl << "  Номер первой строки: ";
	cin >> f;
	cout << "  Номер второй строки: ";
	cin >> s;
	if (projects[f] == projects[s]) {
		cout << "  Данные строки равны" << endl;
	}
	else {
		cout << "  Данные строки не равны" << endl;
	}
	projects[s] = projects[n];
	projects[n].showData();
	system("pause");
	delete[]projects;
	return 0;
}

