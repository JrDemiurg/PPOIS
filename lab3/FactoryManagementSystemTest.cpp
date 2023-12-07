#include "pch.h"
#include "CppUnitTest.h"
#include "../Project3/Factory.h"
#include "../Project3/Inspector.h"
#include "../Project3/InterfaceWorker.h"
#include "../Project3/Loader.h"
#include "../Project3/Manager.h"
#include "../Project3/Product.h"
#include "../Project3/ProductionLine.h"
#include "../Project3/ProductionLineWorker.h"
#include "../Project3/SupplyDepartment.h"
#include "../Project3/Warehouse.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FactoryManagementSystemTest
{
	TEST_CLASS(FactoryManagementSystemTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Factory factory("Factory", "here");
			ProductionLineWorker Jane("Jane", 1, 100, 10);
			factory.addWorker(&Jane);
			factory.giveSalary();
			factory.increaseEarnings(10);
			Assert::IsTrue(factory.getAddress() == "here");
			Assert::IsTrue(factory.getEarnings() == 10);
			Assert::IsTrue(factory.getName() == "Factory");
		}
		TEST_METHOD(TestMethod2)
		{
			Factory factory("Factory", "here");
			ProductionLineWorker Jane("Jane", 1, 100, 10);
			ProductLine line(&factory, 1, "table", 10);
			Warehouse warehouse(1);
			Loader Brick(&warehouse, "Brick", 2, 500, 5);
			SupplyDepartment supply(1);
			Manager Rick(&supply, "Rick", 2, 200, 12);
			Rick.buyMaterial("wood");
			line.addWorker(&Jane);
			line.startProductionLine();
			line.createProduct(Jane, warehouse, supply, "wood");
			Assert::IsTrue(line.getProductionLineStatus());
			Assert::IsTrue(line.getProductName() == "table");
			line.setProductName("chair");
			line.stopProductionLine();
		}
		TEST_METHOD(TestMethod3)
		{
			ProductionLineWorker Jane("Jane", 1, 100, 10);
			Jane.setSalary(20);
			Jane.giveSalary();
			Jane.increaseBalance(10);
			Assert::IsTrue(Jane.getbalance() == 130);
			Assert::IsTrue(Jane.getHumanID() == 1);
			Assert::IsTrue(Jane.getName() == "Jane");
			Assert::IsTrue(Jane.getSalary() == 20);
			Jane.performWork("table", 10);
		}
		TEST_METHOD(TestMethod4)
		{
			Factory factory("Factory", "here");
			ProductLine line(&factory, 1, "tovar", 10);
			ProductionLineWorker Jane("Jane", 1, 100, 10);
			Warehouse warehouse(1);
			Loader Brick(&warehouse, "Brick", 2, 500, 5);
			SupplyDepartment supply(1);
			Manager Rick(&supply, "Rick", 2, 200, 12);
			Inspector Morty("Morty", 1, 1000, 100);
			Rick.buyMaterial("wood");
			line.startProductionLine();
			Brick.performWork(line.createProduct(Jane, warehouse, supply, "wood"));
			warehouse.countProduct();
			Assert::IsTrue(warehouse.getAmountOfProduct() == 1);
			warehouse.checkProducts(Morty);
			Assert::IsTrue(warehouse.getWarehouseID() == 1);
			Rick.buyMaterial("wood");
			Brick.performWork(line.createProduct(Jane, warehouse, supply, "wood"));
			warehouse.takeOutProduct();
		}
		TEST_METHOD(TestMethod5)
		{
			Warehouse warehouse(1);
			SupplyDepartment supply(1);
			supply.addMaterial("wood");
			Assert::IsTrue(supply.deliverMaterial("wood"));
			Assert::IsTrue(supply.getNumberOfMaterials() == 0);
			Assert::IsTrue(supply.getSupplyDepartmentID() == 1);
		}
	};
}
