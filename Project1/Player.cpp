#include "Player_C.h"
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

Player::Player() : m_skills{ "a", "b", "c", "d", "e" }, m_hp(0), m_name("")
{

}

void Player::setSkills()
{
	string skillNames[] = { "Archery", "Swords", "Magic", "Pugilism", "Lockpicking", "Stealth", "Mining", "Woodcutting" };
	unsigned randSeed = time(0);
	srand(randSeed);

	for (int i = 0; i < 5; i++)
	{
		m_skills[i] = skillNames[(rand() % 8)];
	}
}

void Player::setHP(int hp)
{
	if (hp > 100)
	{
		cout << "HP value too high! Set HP to max of 100.";
	}
	else if (hp < 0)
	{
		cout << "HP value too low! Set HP to minimum of 0.";
	}
	else
	{
		m_hp = hp;
	}
}

void Player::setName(string name)
{
	m_name = name;
}

void Player::display()
{
	cout << endl << m_name << " has " << m_hp << " hp and the following skills: " 
		<< m_skills[0] << ", " << m_skills[1] << ", " << m_skills[2] << ", " << m_skills[3] << ", " << m_skills[4];
}