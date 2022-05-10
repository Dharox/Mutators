#include "Player_C.h"
#include <iostream>

using namespace std;

int main()
{
	Player* players = new Player[3];
	string nameHolder;
	int hpHolder;

	for (int i = 0; i < 3; i++)
	{
		cout << "\nEnter player " << i + 1 << " name: ";
		getline(cin, nameHolder);
		players[i].setName(nameHolder);

		cout << "\nEnter player " << i + 1 << " HP amount: ";
		cin >> hpHolder;
		players[i].setHP(hpHolder);

		players[i].setSkills();
		cin.ignore();
	}

	for (int j = 0; j < 3; j++)
	{
		players[j].display();
	}

	return 0;
}