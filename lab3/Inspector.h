#pragma once
#include "Worker.h"
#include "Product.h"
class Inspector : public Worker {
public:
	Inspector( string name, int workerID, int balance, int salary);
	bool performWork(Product* product);

};
