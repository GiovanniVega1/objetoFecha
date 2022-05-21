#pragma once
class Date
{
	private:
		int day, month, year;
	public:
		Date(int inmonth, int inday, int inyear);
		void setMonth(int inmonth);
		void setDay(int inday, int inmonth, int inyear);
		void setYear(int inyear);
		int getMonth();
		int getDay();
		int getYear();
		int esBiciesto(int inyear);
		int cantMaxDiaMes(int inmonth, int inyear);
		//Prefix
		Date& operator ++();	
};

