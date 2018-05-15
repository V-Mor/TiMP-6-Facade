#include "Building_company.h"

void Building_company::buildCheapHouse()
{
	sp->giveSomeMoney();
	arch->makeCheapHouseProject();
	bFact->produceCheapMaterials();
	wrks->workLite(); 
	cout << "Your house is done!\n";
}

void Building_company::buildExpensiveHouse()
{
	sp->giveLotsOfMoney();
	arch->makeExpensiveHouseProject();
	bFact->produceExpensiveMaterials();
	wrks->workHard();
	cout << "Your house is done!\n";
}

Building_company::Building_company()
{
	arch = new Architect();
	bFact = new Building_materials_factory();
	sp = new Sponsor();
	wrks = new Workers();
}
