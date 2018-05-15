#include "Building_company.h"

void Building_company::buildCheapHouse()
{
	cout << "Sponsor: ";
	sp->giveSomeMoney();
	cout << "Architect: ";
	arch->makeCheapHouseProject();
	cout << "Building factory: ";
	bFact->produceCheapMaterials();
	cout << "Workers: ";
	wrks->workLite(); 
	cout << "Your house is done!\n\n";
}

void Building_company::buildExpensiveHouse()
{
	cout << "Sponsor: ";
	sp->giveLotsOfMoney();
	cout << "Architect: ";
	arch->makeExpensiveHouseProject();
	cout << "Building factory: ";
	bFact->produceExpensiveMaterials();
	cout << "Workers: ";
	wrks->workHard();
	cout << "Your house is done!\n\n";
}

Building_company::Building_company()
{
	arch = new Architect();
	bFact = new Building_materials_factory();
	sp = new Sponsor();
	wrks = new Workers();
}
