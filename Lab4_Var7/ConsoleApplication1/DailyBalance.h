#pragma once

#include "Date.h"
#include "Operation.h"

class DailyBalance : public Date {
private:
	Operation* operationList;
	int size;

	void printTableDivider(int sym) const;
public:
	DailyBalance(Operation*, int size, int dd = 1, int mm = 1, int yy = 1980);
	DailyBalance(const DailyBalance& p);
	~DailyBalance();

	void printOperations() const;
	virtual void print(char* s) const;
	virtual void Show() const;
};
