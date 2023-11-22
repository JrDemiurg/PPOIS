#include "Human.h"

Human::Human(string name, int humanID, int balance): name(name), humanID(humanID), balance(balance){}

string Human::getName()
{
    return name;
}

int Human::getHumanID()
{
    return humanID;
}

int Human::getbalance()
{
    return balance;
}

void Human::increaseBalance(int size)
{
    balance += size;
}
