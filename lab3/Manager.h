#pragma once
#include "Worker.h"
#include "SupplyDepartment.h"

class Manager : public Worker {
public:
	Manager(SupplyDepartment* supplyDepartment,string name, int workerID, int balance, int salary);
	void buyMaterial(string material);
private:
	SupplyDepartment* supplyDepartment;
};