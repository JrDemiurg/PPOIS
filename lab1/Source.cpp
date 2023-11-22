#include "Cube.h"

int main() {
	setlocale(LC_ALL, "Russian");
	
	int choise;
	Cube cube;
	while (true)
	{
		cout << "Поворот по часовой стрелки:              7 - проверка на победу" << endl << "1 - передней грани                       8 - запутать кубик" 
			<< endl << "2 - задней грани                         9 - записать в файл" << endl << "3 - верхней грани                        10 - прочесть из файла" 
			<< endl << "4 - нижней грани" << endl << "5 - левой грани" << endl << "6 - правой грани" 
			<< endl << "Поворот против часовой стрелки:"<< endl << "11 - передней грани" << endl << "22 - задней грани" << endl << "33 - верхней грани" << endl
			<<"44 - нижней грани" << endl << "55 - левой грани" << endl << "66 - правой грани" << endl;
		cube.show();
		cin >> choise;
		system("cls");
		switch (choise)
		{
		case 7:
			cube.isComplited();
			break;
		case 8:
			cube.randomTurns();
			break;
		case 9:
			cube.write(cube);
			break;
		case 10:
			cube.read(cube);
			break;
		default:
			cube.turn(choise);
		}
	}
	return 0;
}