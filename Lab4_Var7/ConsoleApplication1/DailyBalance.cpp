#include "DailyBalance.h"

DailyBalance::DailyBalance(Operation* mass, int s, int dd, int mm, int yy) {
	setDate(dd, mm, yy);
	operationList = new Operation[s];
	size = s;

	for (int i = 0; i < s; i++) {
		operationList[i] = mass[i];
	}
}

DailyBalance::DailyBalance(const DailyBalance& p) : Date(p) {

	operationList = new Operation[p.size];
	size = p.size;

	for (int i = 0; i < p.size; i++) {
		operationList[i] =p.operationList[i];
	}
}

DailyBalance::~DailyBalance() {
	delete[] operationList;
}

void DailyBalance::printOperations() const {
	print(":");
	
	printTableDivider(194);

	
	printf("%c%-20s%c%-20s%c%-10s%c%-5s%c%-5s%c%-10s%c%-5s%c\n",179, "Name", 179, 
		"Surname", 179, "Date", 179, "Price", 179, "Amount", 179,"Total",179, "Type", 179);

	for (int i = 0; i < size; i++) {
		printTableDivider(197);
		printf("%c%-20s%c%-20s%c%-10s%c%5.2lf%c%6.2lf%c%10.2lf%c%-5s%c\n", 
			179, (operationList[i]).getName(), 
			179, (operationList[i]).getSurname(), 
			179, (operationList[i]).getDateStr("/"),
			179, (operationList[i]).getPrice(),
			179, (operationList[i]).getAmount(),
			179, (operationList[i]).getTotalPrice(),
			179, (operationList[i]).toString(),
			179);
	}

	printTableDivider(193);
}

void DailyBalance::print(char* s) const {
	printf("Daily Balance for %d%s%d%s%d\n", day, s, month, s, year);
}

void DailyBalance::printTableDivider(int sym) const {

	int sideFirst;
	int sideSecond;

	switch (sym) {
	case 194: 
		sideFirst = 218;
		sideSecond = 191;
		break;
	case 197:
		sideFirst = 195;
		sideSecond = 180;
		break;
	case 193:
		sideFirst = 192;
		sideSecond = 217;
		break;
	default: break;
	}

	putchar(sideFirst);
	for (int i = 0; i < 82; i++) {
		if (i == 20 || i == 41 || i == 52 || i == 58 || i == 65 || i == 76) {
			putchar(sym);
		}
		else {
			putchar(196);
		}
	}
	putchar(sideSecond);

	putchar('\n');
}

void DailyBalance::Show() const {
	printf("I'm daily balance Object!");
}