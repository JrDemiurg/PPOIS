#pragma once
#include "IMemberShip.h"

class MonthlyMemberShip : public IMemberShip {
public:
	MonthlyMemberShip(Gym& gym, Client& client, int price, string date);
};