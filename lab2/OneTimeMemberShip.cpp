#include "OneTimeMemberShip.h"

OneTimeMemberShip::OneTimeMemberShip(Gym& gym, Client& client, int price, string date) : IMemberShip(gym,client,price,date){
	gym.increaseEarnings(price);
	duration = 0;
}
