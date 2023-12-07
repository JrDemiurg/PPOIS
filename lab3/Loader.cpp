#include "Loader.h"
Loader::Loader(Warehouse* warehouse, string name, int workerID, int balance, int salary) : InterfaceWorker(name, workerID, balance,
	salary), warehouse(warehouse) {}

void Loader::performWork( Product* product)
{
	if (product != NULL)
	{
		warehouse->addProduct(product);
	}
}
