#include "Inspector.h"

Inspector::Inspector(string name, int workerID, int balance, int salary): InterfaceWorker(name, workerID, balance, salary){}

bool Inspector::performWork(Product* product)
{
	return product->getQualitative();
}
