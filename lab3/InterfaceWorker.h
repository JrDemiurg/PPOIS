#pragma once
#include<iostream>
#include<string>
using namespace std;

class InterfaceWorker {
public:
	InterfaceWorker(string name, int workerID, int balance, int salary);
	string getName();
	int getHumanID();
	int getbalance();
	void increaseBalance(int size);
	int getSalary();
	void setSalary(int salary);
	void giveSalary();
protected:
	string name;
	int workerID;
	int balance;
	int salary;
};