#pragma once
#include <iostream>
#include <fstream>
#include <direct.h>
using namespace std;

class Cube {
//  r
// bwgy
//  o
	char top_[3][3] = { {'r','r','r'}, {'r','r','r'}, {'r','r','r'} };
	char bottom_[3][3] = { {'o','o','o'}, {'o','o','o'}, {'o','o','o'} };
	char front_[3][3] = { {'w','w','w'},{'w','w','w'},{'w','w','w'} };
	char back_[3][3] = { {'y','y','y'}, {'y','y','y'}, {'y','y','y'} };
	char left_[3][3] = { {'b','b','b'}, {'b','b','b'}, {'b','b','b'} };
	char right_[3][3] = { {'g','g','g'}, {'g','g','g'}, {'g','g','g'} };
	string path_ = "save.txt";

public:
	Cube();

	void show();

	void turn(int side);

	void turn(char front[3][3], char top[3][3], char bottom[3][3], char left[3][3], char right[3][3]);

	void randomTurns();

	bool check();

	void write(Cube cube);

	void read(Cube& cube, int choise);

	void read(Cube& cube, int choise, string path);
};
