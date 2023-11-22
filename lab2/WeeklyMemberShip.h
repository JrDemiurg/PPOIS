#pragma once
#include "IMemberShip.h"

class WeeklyMemberShip : public IMemberShip {
public:
	WeeklyMemberShip(Gym& gym, Client &client, int price, string date);
};
