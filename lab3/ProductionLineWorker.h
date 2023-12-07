#pragma once
#include "Worker.h"
#include "Product.h"
#include <random>
class ProductionLineWorker : public Worker {
public:
	ProductionLineWorker(string name, int workerID, int balance, int salary);
	Product* performWork(string productName,int productPrice);
};