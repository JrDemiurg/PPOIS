#include "Cube.h"

int main() {
	setlocale(LC_ALL, "Russian");
	
	int choise;
	Cube cube;
	while (true)
	{
		cout << "������� �� ������� �������:              7 - �������� �� ������" << endl << "1 - �������� �����                       8 - �������� �����" 
			<< endl << "2 - ������ �����                         9 - �������� � ����" << endl << "3 - ������� �����                        10 - �������� �� �����" 
			<< endl << "4 - ������ �����" << endl << "5 - ����� �����" << endl << "6 - ������ �����" 
			<< endl << "������� ������ ������� �������:"<< endl << "11 - �������� �����" << endl << "22 - ������ �����" << endl << "33 - ������� �����" << endl
			<<"44 - ������ �����" << endl << "55 - ����� �����" << endl << "66 - ������ �����" << endl;
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