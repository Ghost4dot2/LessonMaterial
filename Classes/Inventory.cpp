#include "Inventory.h"


Headlamp Inventory::getLamp()
{
	return this->lamp;
}

bool Inventory::getMirror()
{
	return this->mirror;
}

bool Inventory::getMirror(int avalue)
{
	return avalue;
}

Nerd Inventory::getMTGNerd()
{
	return this->mtgNerd;
}

void Inventory::setMirror(bool hasMirror)
{
	mirror = hasMirror;
}

void Inventory::setMTGNerd(Nerd nerdState)
{
	mtgNerd = nerdState;
}

void Inventory::setLamp(Headlamp lampState)
{
	lamp = lampState;
}