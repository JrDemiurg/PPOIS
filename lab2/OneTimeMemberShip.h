#pragma once
#include "IMemberShip.h"

class OneTimeMemberShip : public IMemberShip {
public:
	OneTimeMemberShip(Gym& gym, Client& client, int price, string date);
};