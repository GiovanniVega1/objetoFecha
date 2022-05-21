#pragma once
class Date
{
	private:
		int day, month, year;
	public:
		Date(int inmonth, int inday, int inyear);
		void setMonth(int inmonth);
		void setDay(int inday);
		void setYear(int inyear);
		int getMonth();
		int getDay();
		int getYear();
		//Prefix
		Date& operator ++();	
};

