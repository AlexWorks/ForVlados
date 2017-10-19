#include "Operator.h"


Operator::Operator(char* n, char* s, int dd, int mm, int yy)
: Date(dd, mm, yy) {
	
	if (strlen(n) <= 20) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	else {
		name = new char[5];
		strcpy(name, "Name");
	}

	if (strlen(s) <= 20) {
		surname = new char[strlen(s) + 1];
		strcpy(surname, s);
	}
	else {
		surname = new char[8];
		strcpy(name, "Surname");
	}
}

Operator::Operator(const Operator& p) : 
	Date (p) {
	name = new char[strlen(p.name) + 1];
	strcpy(name, p.name);

	surname = new char[strlen(p.surname) + 1];
	strcpy(surname, p.surname);
}

Operator::~Operator() {
	delete[] name;
	delete[] surname;
}

void Operator::setName(char* s) {
	name = new char[strlen(s) + 1];
	strcpy(name, s);
}

void Operator::setSurname(char* s) {
	surname = new char[strlen(s) + 1];
	strcpy(surname, s);
}

void Operator::checkAndSetName(char* s) {
	if (strlen(s) <= 20) {
		setName(s);
	}
}

void Operator::checkAndSetSurname(char* s) {
	if (strlen(s) <= 20) {
		setSurname(s);
	}
}

const char* Operator::getName() const {
	return name;
}

const char* Operator::getSurname() const {
	return surname;
}

void Operator::print(char* s) const {
	printf("Operators birthday is: %d%s%d%s%d\n", day, s, month, s, year );
}

void Operator::Show() const {
	printf("I'm operator Object!");
}