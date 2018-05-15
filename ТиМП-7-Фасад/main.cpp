#include "Building_company.h"

int main()
{
	Building_company *bc = new Building_company();
	bc->buildCheapHouse();
	bc->buildExpensiveHouse();
	return 0;
}