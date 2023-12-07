#include "ProductionLine.h"

ProductLine::ProductLine(Factory *factory, int ID, string productName, int productPrice): ID(ID), productName(productName),
productionLineIsActive(false),productPrice(productPrice), factory(factory){}

void ProductLine::setProductName(string productName)
{
	this->productName = productName;
}

string ProductLine::getProductName()
{
	return productName;
}

void ProductLine::startProductionLine()
{
	productionLineIsActive = true;
}

void ProductLine::stopProductionLine()
{
	productionLineIsActive = false;
}

bool ProductLine::getProductionLineStatus()
{
	return productionLineIsActive;
}

Product* ProductLine::createProduct(ProductionLineWorker& worker,Warehouse& warehouse,SupplyDepartment& supplyDepartment, string material)
{
	if (productionLineIsActive)
	{
		if (supplyDepartment.deliverMaterial(material))
		{
			factory->increaseEarnings(productPrice);
			return worker.performWork(productName, productPrice);
		}
	}
	return NULL;
}

void ProductLine::addWorker(ProductionLineWorker* worker)
{
	workers.push_back(worker);
	factory->addWorker(worker);
}

