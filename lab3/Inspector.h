#pragma once
#include "InterfaceWorker.h"
#include "Product.h"
class Inspector : public InterfaceWorker {
public:
	Inspector( string name, int workerID, int balance, int salary);
	bool performWork(Product* product);

};
