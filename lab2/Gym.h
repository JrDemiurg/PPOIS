#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Worker.h"
using namespace std;

class Gym {
public:
	Gym( string name,string address, int earnings);
	string getName();
	string getAddress();
	int getEarnings();
	int getNumberOfVisits();
	void newVisitor();
	void increaseEarnings(int earnings);
	void addWorker(Worker* worker);
	void giveSalary();
private:
	string address;
	string name;
	int numberOfVisits;
	vector<Worker*> workers;
	int earnings;
};