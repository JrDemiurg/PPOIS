#include "Manager.h"

Manager::Manager(SupplyDepartment* supplyDepartment, string name, int workerID, int balance, int salary):
	Worker(name, workerID, balance, salary), supplyDepartment(supplyDepartment){}

void Manager::buyMaterial(string material)
{
	supplyDepartment->addMaterial(material);
}
