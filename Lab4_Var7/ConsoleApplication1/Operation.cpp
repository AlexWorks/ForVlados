#include "Operation.h"

Operation::Operation(const Operation& p) :
	Operator(p), Fuel(p) {
	totalPrice = p.totalPrice;
	amount = p.amount;
}

Operation& Operation::operator= (const Operation& p) {

	if (this == &p) return *this;

	setName(p.name);
	setSurname(p.surname);
	amount = p.amount;
	day = p.day;
	month = p.month;
	year = p.year;
	fuelType = p.fuelType;
	price = p.price;

	setTotalPrice();

	
	
	return *this;
}

void Operation::setTotalPrice() {
	totalPrice = amount * price;
}

void Operation::setAmount(double p) {
	amount = p;
	setTotalPrice();
}

void Operation::checkAndSetAmount(double p) {
	amount = (p > 0)? p : 0.0;
}

double Operation::getAmount() const {
	return amount;
}

double Operation::getTotalPrice() const {
	return totalPrice;
}

void Operation::print(char* s) const {
	printf("Operation date: %d%s%d%s%d\n", day, s, month, s, year);
}

void Operation::Show() const {
	printf("I'm operation Object!");
}

