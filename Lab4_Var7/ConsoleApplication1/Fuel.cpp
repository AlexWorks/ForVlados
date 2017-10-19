#include "Fuel.h"

Fuel::Fuel(FuelType type, double p) {
	fuelType = type;
	price = (p >= 0) ? p : 0.0;
}

void Fuel::setType(FuelType type) {
	fuelType = type;
}

FuelType Fuel::getType() const {
	return fuelType;
}

void Fuel::setAndCheckPrice(double p) {
	price = (p >= 0) ? p : 0.0;
}

void Fuel::setPrice(double p) {
	price = p;
}

double Fuel::getPrice() const {
	return price;
}

const char* Fuel::toString() const {

	switch (fuelType) {
	case AI92:
		return "AI-92";
	case AI95:
		return "AI-95";
	case AI98:
		return "AI-98";
	case DIZEL:
		return "DIZEL";
	}

	return "Error";
}