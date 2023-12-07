#include "Product.h"


Product::Product(string name, int price, bool qualitative): name(name), price(price), qualitative(qualitative){}

bool Product::getQualitative()
{
	return qualitative;
}
