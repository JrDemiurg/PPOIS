#pragma once
#include<iostream>

using namespace std;

class AbstractExercise {
public:
	AbstractExercise(int numberOfExecuiton, int weight);
	virtual bool doExercise() = 0;
protected:
	int numberOfExecuiton;
	int weight;
};