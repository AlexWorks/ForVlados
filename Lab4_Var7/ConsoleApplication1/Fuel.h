#pragma once

enum FuelType { AI92 = 1, AI95, AI98, DIZEL };

class Fuel {
protected:
	FuelType fuelType;
	double price;
public:
	Fuel(FuelType type = AI95, double p = 0.0);

	void setType(FuelType);
	FuelType getType() const;
	void setPrice(double p);
	void setAndCheckPrice(double p);
	double getPrice() const;
	const char* toString() const;
};
