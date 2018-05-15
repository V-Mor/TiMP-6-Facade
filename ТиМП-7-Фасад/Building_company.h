#pragma once

#include "Architect.h"
#include "Building_materials_factory.h"
#include "Sponsor.h"
#include "Workers.h"

class Building_company
{
	Architect *arch;
	Building_materials_factory *bFact;
	Sponsor *sp;
	Workers *wrks;

public:
	void buildCheapHouse();
	void buildExpensiveHouse();
	Building_company();
};