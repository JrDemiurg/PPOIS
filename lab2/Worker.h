#pragma once
#include"Human.h"

using namespace std;

class Worker : public Human {
public:
	Worker(string name, int humanID, int balance, int salary, int numberOfWorkingDays);
	int getSalary();
	int getNumberOfWorkingDays();
	void setSalary(int salary);
	void setNumberOfWorkingDays(int numberOfWorkingDays);
	void giveSalary();
	void helpWithTraining();
private:
	int salary;
	int numberOfWorkingDays;
};