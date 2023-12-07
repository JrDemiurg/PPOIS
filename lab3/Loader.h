#pragma once
#include "InterfaceWorker.h"
#include "Warehouse.h"
class Loader : public InterfaceWorker {
public:
	Loader(Warehouse* warehouse,string name, int workerID, int balance, int salary);
	void performWork( Product* product);
private:
	Warehouse* warehouse;
};