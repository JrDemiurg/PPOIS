#include "BenchPress.h"

BenchPress::BenchPress(int numberOfExecuiton, int weight): AbstractExercise(numberOfExecuiton, weight){}

bool BenchPress::doExercise()
{
    cout << "The bench-press is performed " << numberOfExecuiton << " times for " << weight << " kg";
    return true;
}
