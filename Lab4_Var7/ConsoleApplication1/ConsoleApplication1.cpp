#include "stdafx.h"
#include "Windows.h"
#include "string.h"

#include "Operation.h"
#include "DailyBalance.h";

int main()
{
	Operation first(1.2, "Fedko", "Varenik", 18, 10, 2017, DIZEL, 1.1),
		second( 1.2, "Vasia", "Galushka", 19, 10, 2017, AI95, 1.6);

	first.print("/");
	printf("%s %s %s\n", second.getName(), second.getSurname(), second.toString());

	Operation mass[] = { first, second };

	DailyBalance today(mass, 2, 19, 10, 2017);

	DailyBalance test(today);

	test.printOperations();


	system("pause");
    return 0;
}