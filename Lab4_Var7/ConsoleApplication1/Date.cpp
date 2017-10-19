#include "stdafx.h"
#include "Date.h"

int Date::monthsDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

Date::Date(int day, int month, int year) {
	setDate(day, month, year);
}

Date::Date(const Date& p) {
	day = p.day;
	month = p.month;
	year = p.year;
}

void Date::setDate(int dd, int mm, int yy) {
	month = (mm >= 1 && mm <= 12) ? mm : 1;
	year = (yy >= 1980 && yy <= 3000) ? yy : 1980;

	if (month == 2 && year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)) {
		day = (dd >= 1 && dd <= 29) ? dd : 1;
	}
	else {
		day = (dd >= 1 && dd <= monthsDays[month]) ? dd : 1;
	}
}

char* Date::getDateStr(char* s) const {
	char* res = new char[11];
	sprintf(res, "%d%s%d%s%d", day, s, month, s, year);

	return res;
}

void Date::Show() const {
	printf("I'm a Date Object!\n");
}
