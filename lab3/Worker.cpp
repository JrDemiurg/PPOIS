#include "Worker.h"

Worker::Worker(string name, int workerID, int balance, int salary) : name(name),
workerID(workerID), balance(balance), salary(salary) {}

string Worker::getName()
{
    return name;
}

int Worker::getHumanID()
{
    return workerID;
}

int Worker::getbalance()
{
    return balance;
}

void Worker::increaseBalance(int size)
{
    balance += size;
}

int Worker::getSalary()
{
    return salary;
}

void Worker::setSalary(int salary)
{
    this->salary = salary;
}

void Worker::giveSalary()
{
    balance += salary;
}
