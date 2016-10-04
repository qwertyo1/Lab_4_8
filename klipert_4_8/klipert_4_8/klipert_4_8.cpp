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

	cout << endl << "Демонастрация работы перегрузки операции ==: " << endl;
	int f, s = 0;
	cout << "  Укажите номера строк для сравнения " << endl << "  Номер первой строки: ";
	cin >> f;
	cout << "  Номер второй строки: ";
	cin >> s;
	if (projects[f] == projects[s]) {
		cout << "  Данные строки равны" << endl;
	}
	else {
		cout << "  Данные строки не равны" << endl;
	}


	cout << endl << "Демонастрация работы перегрузки операции присваивания: " << endl << "  Создадим копию объекта под номером " << s << " и поместим её в объект varToCopy" << endl;
	pses *varToCopy = new pses;
	varToCopy[0] = projects[s];
	cout << " |  Год  |  Научный руководитель  |  Диаметр антенны (м)  |  Рабочая частота (МГц)  | " << endl;
	for (int i = 0; i < n; i++) {
		projects[i].showData();
	}
	cout << endl << " |  Год  |  Научный руководитель  |  Диаметр антенны (м)  |  Рабочая частота (МГц)  | " << endl;
	varToCopy[0].showData();

	system("pause");
	delete[]projects;
	return 0;
}

