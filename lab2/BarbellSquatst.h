#pragma once
#include "AbstractExercise.h"
class BarbellSquats : public AbstractExercise {
public:
	BarbellSquats(int numberOfExecuiton, int weight);
	bool doExercise() override;
};