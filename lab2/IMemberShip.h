#pragma once
#include "Gym.h"
#include "Client.h"
using namespace std;
class IMemberShip {
public:
	IMemberShip(Gym& gym, Client &client, int price,string date);
	bool check(string name);
protected:
	Gym gym;
	Client client;
	int price;
	string date;	
	int duration;
};