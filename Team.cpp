#include "Team.h"

#include <string>
#include <iostream>






//Constructor
Team::Team()
{
	score = 0;
	home_status = false;
	name = "Default Name";
	timeouts = 3;
}

//setter and getters 
void Team::setName(std::string n)
{
	name = n;
}
void Team::setScore(int s)
{
	score = s;
}
void Team::setTimeout(int t)
{
	timeouts = t;
}
void Team::setHomeStatus(bool h)
{
	home_status = h;
}
std::string Team::getName()
{
	return name;
}
int Team::getScore() const
{
	return score;
}
int Team::getTimeouts() const
{
	return timeouts;
}
bool Team::getHomeStatus() const
{
	return home_status;
}
