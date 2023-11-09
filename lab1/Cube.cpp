#include "Cube.h"

Cube::Cube() {
	/*char path[FILENAME_MAX];
	_getcwd(path, sizeof(path));
	path_ = path;
	path_ = path_ + "\\save.txt";
	cout << path_ << endl;*/
}
void Cube::show() {
	for (int i = 0; i < 3; i++)
	{
		cout << "   ";
		for (int j = 0; j < 3; j++)
		{
			cout << top_[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << left_[i][j];
		}
		for (int j = 0; j < 3; j++)
		{
			cout << front_[i][j];
		}
		for (int j = 0; j < 3; j++)
		{
			cout << right_[i][j];
		}
		for (int j = 0; j < 3; j++)
		{
			cout << back_[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "   ";
		for (int j = 0; j < 3; j++)
		{
			cout << bottom_[i][j];
		}
		cout << endl;
	}
}

void Cube::turn(int side) {
	//1 - front, 2 - back, 3 - top, 4 - bottom, 5 - left, 6 - right
	// все движения по часовой с точки зрения на сторону
	switch (side)
	{
	case 1:
		turn(front_, top_, bottom_, left_, right_);
		break;
	case 11:
		turn(front_, top_, bottom_, left_, right_);
		turn(front_, top_, bottom_, left_, right_);
		turn(front_, top_, bottom_, left_, right_);
		break;
	case 2:
		turn(back_, top_, bottom_, right_, left_);
		break;
	case 22:
		turn(back_, top_, bottom_, right_, left_);
		turn(back_, top_, bottom_, right_, left_);
		turn(back_, top_, bottom_, right_, left_);
		break;
	case 3:
		turn(top_, back_, front_, left_, right_);
		break;
	case 33:
		turn(top_, back_, front_, left_, right_);
		turn(top_, back_, front_, left_, right_);
		turn(top_, back_, front_, left_, right_);
		break;
	case 4:
		turn(bottom_, front_, back_, left_, right_);
		break;
	case 44:
		turn(bottom_, front_, back_, left_, right_);
		turn(bottom_, front_, back_, left_, right_);
		turn(bottom_, front_, back_, left_, right_);
		break;
	case 5:
		turn(left_, top_, bottom_, back_, front_);
		break;
	case 55:
		turn(left_, top_, bottom_, back_, front_);
		turn(left_, top_, bottom_, back_, front_);
		turn(left_, top_, bottom_, back_, front_);
		break;
	case 6:
		turn(right_, top_, bottom_, front_, back_);
		break;
	case 66:
		turn(right_, top_, bottom_, front_, back_);
		turn(right_, top_, bottom_, front_, back_);
		turn(right_, top_, bottom_, front_, back_);
		break;
	default:
		break;
	}
}

void Cube::turn(char front[3][3], char top[3][3], char bottom[3][3], char left[3][3], char right[3][3]) {
	char temp;
	for (int i = 0; i < 2; i++)
	{
		char temp = front[0][i];
		front[0][i] = front[2 - i][0];
		front[2 - i][0] = front[2][2 - i];
		front[2][2 - i] = front[i][2];
		front[i][2] = temp;
	}

	if (front[1][1] == top_[1][1])
	{
		for (int i = 0; i < 3; i++)
		{
			temp = top[0][i];
			top[0][i] = left[0][i];
			left[0][i] = bottom[0][i];
			bottom[0][i] = right[0][i];
			right[0][i] = temp;
		}
		return;
	}
	if (front[1][1] == bottom_[1][1])
	{
		for (int i = 0; i < 3; i++)
		{
			temp = top[2][i];
			top[2][i] = left[2][i];
			left[2][i] = bottom[2][i];
			bottom[2][i] = right[2][i];
			right[2][i] = temp;
		}
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		temp = top[2][i];
		top[2][i] = left[2 - i][2];
		left[2 - i][2] = bottom[0][2 - i];
		bottom[0][2 - i] = right[i][0];
		right[i][0] = temp;
	}
}

void Cube::randomTurns() {
	for (int i = 0; i < 25; i++)
	{
		srand(time(NULL) + i);
		int randomSide = rand() % 6 + 1;
		turn(randomSide);
	}
}

bool Cube::check() {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (left_[i][j] != left_[1][1])
			{
				cout << "Continue" << endl;
				return false;
			}
			if (front_[i][j] != front_[1][1])
			{
				cout << "Continue" << endl;
				return false;
			}
			if (right_[i][j] != right_[1][1])
			{
				cout << "Continue" << endl;
				return false;
			}
			if (back_[i][j] != back_[1][1])
			{
				cout << "Continue" << endl;
				return false;
			}
		}
	}
	cout << "You won!!!" << endl;
	return true;
}

void Cube::write(Cube cube) {


	ofstream fout;
	fout.open(path_, ofstream::app);

	if (!fout.is_open())
	{
		cout << "ERROR";
	}
	else
	{
		fout.write((char*)&cube, sizeof(Cube));
	}
	fout.close();
}
void Cube::read(Cube& cube, int choise) {
	read(cube, choise, "save.txt");
}

void Cube::read(Cube& cube, int choise,string path) {
	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Error" << endl;
	}
	else
	{
		cout << "Выберите сохранение" << endl;
		int i;
		for (i = 1; fin.read((char*)&cube, sizeof(Cube)); i++)
		{
			cout << i << endl;
			show();
		}
		do
		{
		} while (choise < 1 || choise >= i);
		ifstream fin;
		//cin >> choise;
		fin.open(path);
		for (int i = 0; i < choise; i++)
		{
			fin.read((char*)&cube, sizeof(Cube));
		}
		fin.close();
		system("cls");
	}
	fin.close();
}