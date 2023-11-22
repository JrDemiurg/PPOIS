#include "Worker.h"

Worker::Worker(string name, int humanID, int balance, int salary, int numberOfWorkingDays): Human(name, humanID,balance), salary(salary),
numberOfWorkingDays(numberOfWorkingDays){}

int Worker::getSalary()
{
	return salary;
}

int Worker::getNumberOfWorkingDays()
{
	return numberOfWorkingDays;
}

void Worker::setSalary(int salary)
{
	this->salary = salary;
}

void Worker::setNumberOfWorkingDays(int numberOfWorkingDays)
{
	this->numberOfWorkingDays = numberOfWorkingDays;
}


void Worker::giveSalary()
{
	balance += salary;
}

void Worker::helpWithTraining()
{
	increaseBalance(40);
}
