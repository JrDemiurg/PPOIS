#pragma once
#include "Worker.h"
#include "Warehouse.h"
class Loader : public Worker {
public:
	Loader(Warehouse* warehouse,string name, int workerID, int balance, int salary);
	void performWork( Product* product);
private:
	Warehouse* warehouse;
};