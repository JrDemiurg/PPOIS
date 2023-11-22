#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Gym.h"
using namespace std;

class SportClub {
public:
	SportClub(string name);
	string getName();
	int getNumberOfGyms();
	int getEarnings();
	void addGym(Gym* gym);
	void countNumberOfGyms();
	void countEarnings();
private:
	string name;
	vector<Gym*> gyms;
	int numberOfGyms;
	int earnings;
};