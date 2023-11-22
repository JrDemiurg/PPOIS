#include "WeeklyMemberShip.h"

WeeklyMemberShip::WeeklyMemberShip(Gym& gym, Client& client, int price, string date) : IMemberShip(gym, client, price, date) {
	duration = 7;
}
