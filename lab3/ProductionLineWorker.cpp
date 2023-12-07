#include "ProductionLineWorker.h"

ProductionLineWorker::ProductionLineWorker(string name, int workerID, int balance, int salary): Worker(name, workerID, balance,
	salary){}

Product* ProductionLineWorker::performWork(string productName, int productPrice)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 1);

    bool qualitative = dis(gen);
	Product *product = new Product(productName,productPrice, qualitative);
    return product;
}