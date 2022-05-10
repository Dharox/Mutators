#ifndef Player_
#define Player_

#include <string>

class Player
{
private:
	std::string m_skills[5];
	std::string m_name;
	int m_hp;

public:
	Player(); // default constructor

	void display();

	void setSkills();
	void setName(std::string name);
	void setHP(int hp);
};
#endif
