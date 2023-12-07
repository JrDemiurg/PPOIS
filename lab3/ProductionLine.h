#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Factory.h"
#include "ProductionLineWorker.h"
#include "Product.h"
#include "Warehouse.h"
#include "SupplyDepartment.h"
using namespace std;

class ProductLine {
public:
	ProductLine(Factory* factory, int ID, string productName, int productPrice);
	void setProductName(string productName);
	string getProductName();
	void startProductionLine();
	void stopProductionLine();
	bool getProductionLineStatus();
	Product* createProduct(ProductionLineWorker& worker, Warehouse& warehouse, SupplyDepartment& supplyDepartment,string material);
	void addWorker(ProductionLineWorker* worker);
private:
	Factory* factory;
	bool productionLineIsActive;
	int ID;
	string productName;
	int productPrice;
	vector<ProductionLineWorker*> workers;
};