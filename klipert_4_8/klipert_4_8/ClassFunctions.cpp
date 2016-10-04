#include "stdafx.h"

void pses::setData(int year, char* adviser, int dia, int clockRate)
{
	this->year = year;
	delete[] this->adviser; 
	this->adviser = new char[strlen(adviser) + 1];
	strcpy(this->adviser, adviser);
	this->dia = dia;
	this->clockRate = clockRate;
}

void pses::showData()
{
	cout << " |" << setw(7) << year << "|" << setw(24) << adviser << "|" << setw(23) << dia << "|" << setw(25) << clockRate << "|" << endl;
}

unsigned int pses::getYear()
{
	return year;
}
char* pses::getAdviser()
{
	return adviser;
}
unsigned int pses::getDia()
{
	return dia;
}
unsigned int pses::getClockRate()
{
	return clockRate;
}

int pses::operator == (pses&c) {
	if ((year != c.year) ||
		(dia != c.dia) ||
		(strcmp(adviser, c.adviser) != 0) ||
		(clockRate != c.clockRate) != 0)
		return 0; //ложь
	else
		return 1;//истина
}

pses pses::operator = (pses&c) {
	year = c.year;
	dia = c.dia;
	clockRate = c.clockRate;
	delete[] adviser; 
	adviser = new char[strlen(c.adviser) + 1];
	strcpy(adviser, c.adviser);
	return c;
}


pses operator + (const pses&a, const pses&b) {
	pses t;
	t.year = a.year + b.year;
	t.dia = a.dia + b.dia;
	t.clockRate = a.clockRate + b.clockRate;
	delete[] t.adviser;
	t.adviser = new char[strlen(a.adviser) + strlen(b.adviser) + 1];
	strcpy(t.adviser, a.adviser);
	strcat(t.adviser, a.adviser);
	return t;
}
