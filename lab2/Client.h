#pragma once
#include"Human.h"
#include"Worker.h"
#include"Gym.h"
#include "BenchPress.h"
#include "BarbellSquatst.h"
class Client : public Human {
public:
	Client(string name, int humanID, int balance);
	void visitGym(Gym &gym);
	void buyLessonWithTrainer(Gym& gym, Worker& worker);
	void doExercise(AbstractExercise* exercise);
};