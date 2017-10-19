#pragma once

#include "Date.h"
#include "stdafx.h"
#include "string.h"

class Operator : public Date {
protected:
	char* name;
	char* surname;
public:
	Operator(char* n = "Name", char* s = "Surname", int dd = 1, int mm = 1, int yy = 1980);
	Operator(const Operator& p);
	~Operator();

	void setName(char* s);
	void setSurname(char* s);
	void checkAndSetName(char* s);
	void checkAndSetSurname(char* s);

	const char* getName() const;
	const char* getSurname() const;

	virtual void print(char* s) const;
	virtual void Show() const;
};
