#pragma once
#include "InterfaceWorker.h"
#include "Product.h"
#include <random>
class ProductionLineWorker : public InterfaceWorker {
public:
	ProductionLineWorker(string name, int workerID, int balance, int salary);
	Product* performWork(string productName,int productPrice);
};