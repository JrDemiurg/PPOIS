#pragma once
#include<string>
#include<iostream>
#include <vector>
using namespace std;
class SupplyDepartment {
public:
	SupplyDepartment(int supplyDepartmentID);
	void addMaterial(string material);
	bool deliverMaterial(string material);
	int getSupplyDepartmentID();
	int getNumberOfMaterials();
private:
	int supplyDepartmentID;
	vector<string> materials;
};