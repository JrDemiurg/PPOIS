#include "IMemberShip.h"

IMemberShip::IMemberShip(Gym& gym, Client& client, int price, string date) : gym(gym), client(client), price(price), date(date) {
	gym.increaseEarnings(price);
	client.increaseBalance(-price);
}

bool IMemberShip::check(string name)
{
	if (client.getName() == name)
	{
		return true;
	}
	return false;
}
