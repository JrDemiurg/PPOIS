#include "InterfaceWorker.h"

InterfaceWorker::InterfaceWorker(string name, int workerID, int balance, int salary) : name(name),
workerID(workerID), balance(balance), salary(salary) {}

string InterfaceWorker::getName()
{
    return name;
}

int InterfaceWorker::getHumanID()
{
    return workerID;
}

int InterfaceWorker::getbalance()
{
    return balance;
}

void InterfaceWorker::increaseBalance(int size)
{
    balance += size;
}

int InterfaceWorker::getSalary()
{
    return salary;
}

void InterfaceWorker::setSalary(int salary)
{
    this->salary = salary;
}

void InterfaceWorker::giveSalary()
{
    balance += salary;
}
