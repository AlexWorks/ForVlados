#pragma once
#include "Fuel.h"
#include "Operator.h"

class Operation : public Operator, public Fuel {
protected:
	double amount;
	double totalPrice;
	
	void setTotalPrice();
public:
	Operation(double sAmount = 0, char* name = "Name", char* surname = "Surname", int dd = 1,
		int mm = 1, int yy = 1980, FuelType type = AI95, double price = 0.0) :
		Operator(name, surname, dd, mm, yy), Fuel(type, price) {
		
		amount = sAmount;
		setTotalPrice();
	}

	Operation(const Operation& p);

	void setAmount(double p);
	void checkAndSetAmount(double p);

	Operation& operator= (const Operation& p);

	double getAmount() const;
	double getTotalPrice() const;

	virtual void print(char* s) const;
	virtual void Show() const;
};
