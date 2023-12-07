#include "InterfaceWorker.h"
#include "Factory.h"
#include "ProductionLine.h"
#include "ProductionLineWorker.h"
#include "Loader.h"
#include "Manager.h"
int main(){
	Factory factory("aaa", "tyt");
	ProductLine line(&factory, 1, "tovar", 10);
	ProductionLineWorker Jane("Jane", 1, 100, 10);
	Warehouse warehouse(1);
	Loader Brick(&warehouse,"Brick", 2, 500, 5);
	SupplyDepartment supply(1);
	Manager Rick(&supply,"Rick", 2, 200, 12);
	Inspector Morty("Morty", 1, 1000, 100);
	Rick.buyMaterial("wood");
	Rick.buyMaterial("wood");
	Rick.buyMaterial("wood");
	Rick.buyMaterial("wood");
	Rick.buyMaterial("wood");
	cout<< supply.getNumberOfMaterials();
	line.startProductionLine();
	Brick.performWork(line.createProduct(Jane, warehouse, supply, "wood"));
	Brick.performWork(line.createProduct(Jane, warehouse, supply, "wood"));
	Brick.performWork(line.createProduct(Jane, warehouse, supply, "wood"));
	Brick.performWork(line.createProduct(Jane, warehouse, supply, "wood"));
	cout << supply.getNumberOfMaterials();
	warehouse.countProduct();
	cout << warehouse.getAmountOfProduct();
	warehouse.checkProducts(Morty);
	warehouse.countProduct();
	cout << warehouse.getAmountOfProduct();
	cout << endl<< factory.getEarnings();
	return 0;
}