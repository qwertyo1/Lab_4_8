#pragma once

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class pses {
private:
	unsigned int year;
	char* adviser = new char;
	unsigned int dia;
	unsigned int clockRate;

public:
	void setData(int pses_year, char* pses_adviser, int pses_dia, int pses_clockRate);
	void showData();
	unsigned int getYear();
	char* getAdviser();
	unsigned int getDia();
	unsigned int getClockRate();
	int operator == (pses&c);
	pses operator = (pses&c);
	friend pses operator + (const pses&, const pses&);
};