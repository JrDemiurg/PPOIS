#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "ProductionLineWorker.h"
using namespace std;
class Factory {
public:
	Factory(string name, string address);
	string getName();
	string getAddress();
	int getEarnings();
	void increaseEarnings(int earnings);
	void addWorker(ProductionLineWorker* worker);
	void giveSalary();
private:
	string name;
	string address;
	int earnings;
	vector<ProductionLineWorker*> workers;
};