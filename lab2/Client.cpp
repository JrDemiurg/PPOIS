#include "Client.h"

Client::Client(string name, int humanID, int balance): Human(name, humanID, balance){}

void Client::visitGym(Gym &gym)
{
	gym.newVisitor();
}

void Client::buyLessonWithTrainer(Gym& gym,Worker& worker)
{
	balance -= 50;
	gym.increaseEarnings(10);
	worker.helpWithTraining();
}

void Client::doExercise(AbstractExercise* exercise)
{
	exercise->doExercise();
}




