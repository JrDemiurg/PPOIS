#include "BarbellSquatst.h"

BarbellSquats::BarbellSquats(int numberOfExecuiton, int weight) : AbstractExercise(numberOfExecuiton, weight) {}

bool BarbellSquats::doExercise()
{
    cout << "The barbell squats is performed " << numberOfExecuiton << " times for " << weight << " kg";
    return true;
}

