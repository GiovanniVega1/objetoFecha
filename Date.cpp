#include "Date.h"

Date::Date(int inmonth, int inday, int inyear) {
	setMonth(inmonth);
	setDay(inday);
	setYear(inday);
}

void Date::setMonth(int inmonth) {
	month = inmonth;
}
void Date::setDay(int inday) {
	day = inday;
}
void Date::setYear(int inyear) {
	year = inyear;
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

Date& Date::operator++() {
	++day;
	return *this;
}