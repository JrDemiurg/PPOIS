#include "Warehouse.h"

Warehouse::Warehouse(int warehouseID): warehouseID(warehouseID){}

int Warehouse::getWarehouseID()
{
	return warehouseID;
}

void Warehouse::addProduct(Product *product)
{
	products.push_back(product);
}

void Warehouse::takeOutProduct()
{
	products.pop_back();
}

void Warehouse::countProduct()
{
	amountOfProduct = 0;
	for (Product* i : products)
	{
		amountOfProduct++;
	}
}

int Warehouse::getAmountOfProduct()
{
	return amountOfProduct;
}

void Warehouse::checkProducts(Inspector& inspector)
{
	vector<Product*> tempProducts;
	for (Product* product : products) {
		if (inspector.performWork(product)) {
			tempProducts.push_back(product);
		}
	}
	for (Product* product : products) {
		delete product;
	}
	products.clear();
	products = tempProducts;
}


