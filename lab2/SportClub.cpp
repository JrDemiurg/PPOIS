#include "SportClub.h"

SportClub::SportClub(string name) : name(name), numberOfGyms(0), earnings(0){}

string SportClub::getName()
{
	return name;
}

int SportClub::getNumberOfGyms()
{
	return numberOfGyms;
}

int SportClub::getEarnings()
{
	return earnings;
}

void SportClub::addGym(Gym* gym)
{
	gyms.push_back(gym);
}

void SportClub::countNumberOfGyms()
{
	numberOfGyms = 0;
	for (Gym* i : gyms)
	{
		numberOfGyms++;
	}
}

void SportClub::countEarnings()
{
	earnings = 0;
	for (Gym* i : gyms)
	{
		earnings += i->getEarnings();
	}
}


