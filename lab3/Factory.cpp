#include "Factory.h"

Factory::Factory(string name,string address): name(name), address(address), earnings(0){}

string Factory::getName()
{
	return name;
}

string Factory::getAddress()
{
	return address;
}

int Factory::getEarnings()
{
	return earnings;
}

void Factory::increaseEarnings(int earnings)
{
	this->earnings += earnings;
}

void Factory::addWorker(ProductionLineWorker* worker)
{
	workers.push_back(worker);
}

void Factory::giveSalary()
{
	for (ProductionLineWorker* i : workers)
	{
		i->giveSalary();
	}
}
