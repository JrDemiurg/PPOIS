#include "Inspector.h"

Inspector::Inspector(string name, int workerID, int balance, int salary): Worker(name, workerID, balance, salary){}

bool Inspector::performWork(Product* product)
{
	return product->getQualitative();
}
