#pragma once
#include<iostream>
#include<string>
using namespace std;

class Human {
public:
	Human(string name, int humanID,int balance);
	string getName();
	int getHumanID();
	int getbalance();
	void increaseBalance(int size);
protected:
	string name;
	int humanID;
	int balance;
};