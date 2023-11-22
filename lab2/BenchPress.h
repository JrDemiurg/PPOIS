#pragma once
#include "AbstractExercise.h"
class BenchPress : public AbstractExercise {
public:
	BenchPress(int numberOfExecuiton, int weight);
	bool doExercise() override;
};