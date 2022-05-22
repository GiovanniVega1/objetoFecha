#include "Date.h"
#include<iostream>
#include<stdexcept> 

using namespace std;

Date::Date(int inmonth, int inday, int inyear) {
	try {
		setMonth(inmonth);
		setDay(inday, inmonth, inyear);
		setYear(inyear);
		cout << "La fecha es valida" << endl;
	}
	catch(invalid_argument& error){
		//cerr << error.what() << endl;
		cout << "Fecha invalida, el programa termino" << endl;
	}
}

void Date::setMonth(int inmonth) {
	if (inmonth > 0 && inmonth < 13) {
		month = inmonth;
	}
	else {
		throw invalid_argument("Asi no va"); 
	}
}
void Date::setDay(int inday, int inmonth, int inyear) {
	if (cantMaxDiaMes(inmonth, inyear) >= inday) {
		day = inday;
	}
	else {
		throw invalid_argument("Asi no va");
	}
}
void Date::setYear(int inyear) {
	if (inyear > 0) {
		year = inyear;
	}
	else {
		throw invalid_argument("Asi no va");
	}
}

int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}
int Date::getYear() {
	return year;
}

int Date::esBiciesto(int inyear) {
	return ((inyear % 4 == 0 && inyear % 100 != 0) || inyear % 400 == 0);
}

int Date::cantMaxDiaMes(int inmonth, int inyear) {
	if (inmonth == 1 || inmonth == 3 || inmonth == 5 || inmonth == 7 || inmonth == 8 || inmonth == 10 || inmonth == 12) {
		return 31;
	}
	else if (inmonth == 4 || inmonth == 6 || inmonth == 9 || inmonth == 11) {
		return 30;
	}
	else if (inmonth == 2) {
		if (esBiciesto(inyear)) {
			return 29;
		}
		else {
			return 28;
		}
	}
}

Date& Date::operator++() {
	if (cantMaxDiaMes(month, year) > day) {
		++day;
	}
	else if (cantMaxDiaMes(month, year) == day && month < 12) {
		++month;
		day = 1;
	}
	else if(day == 31 && month == 12)
	{
		++year;
		day = 1;
		month = 1;
	}

	return *this;
}

Date& Date::operator--() {
	if (1 < day) {
		--day;
	}
	else if (day == 1 && month > 1) {
		--month;
		day = cantMaxDiaMes(month, year);
	}
	else if(month == 1 && day == 1)
	{
		--year;
		day = cantMaxDiaMes(month, year);
		month = 12;
	}

	return *this;
}