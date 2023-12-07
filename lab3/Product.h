#pragma once
#include <string>
#include <iostream>
using namespace std;
class Product {
public:
	Product(string name, int price, bool qualitative);
	bool getQualitative();
private:
	string name;
	int price;
	bool qualitative;
};