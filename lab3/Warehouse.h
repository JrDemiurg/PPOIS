#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Product.h"
#include "Inspector.h"
class Warehouse {
public:
	Warehouse(int warehouseID);
	int getWarehouseID();
	void addProduct(Product *product);
	void takeOutProduct();
	void countProduct();
	int getAmountOfProduct();
	void checkProducts(Inspector& inspector);
private:
	int warehouseID;
	int amountOfProduct;
	vector <Product*> products;
};