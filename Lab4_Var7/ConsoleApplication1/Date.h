#pragma once
class Date {
protected:
	int year;
	short month;
	short day;
	static int monthsDays[13];
public:
	Date(int day = 1, int month = 1, int year = 1980);
	Date(const Date& p);

	void setDate(int dd = 1, int mm = 1, int yy = 1980);
	char* getDateStr(char* s) const;

	virtual void print(char* s) const = 0;
	virtual void Show() const;
};