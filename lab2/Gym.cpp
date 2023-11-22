#include "Gym.h"

Gym::Gym(string name, string address, int earnings) :  name(name), address(address), earnings(earnings),numberOfVisits(0) {
}

string Gym::getName()
{
	return name;
}

string Gym::getAddress()
{
	return address;
}

int Gym::getEarnings()
{
	return earnings;
}

int Gym::getNumberOfVisits()
{
	return numberOfVisits;
}

void Gym::newVisitor()
{
	numberOfVisits += 1;
}

void Gym::increaseEarnings(int earnings)
{
	this->earnings += earnings;
}

void Gym::addWorker(Worker* worker)
{
	workers.push_back(worker);
	earnings = earnings - worker->getSalary();
}

void Gym::giveSalary()
{
	for (Worker* i: workers)
	{
		i->giveSalary();
	}
}

