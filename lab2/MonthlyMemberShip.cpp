#include "MonthlyMemberShip.h"

MonthlyMemberShip::MonthlyMemberShip(Gym& gym, Client& client, int price, string date) : IMemberShip(gym, client, price, date) {
	duration = 30;
}
