#include "Scoreboard.h"
#include "Team.h"
#include <iostream>
#include <iomanip>




//setters and getters
void Scoreboard::setHome(Team hTeam)
{
	home = hTeam;
}
void Scoreboard::setAway(Team aTeam)
{
	away = aTeam;
}
Team Scoreboard::getHome() 
{
	return home;
}
Team Scoreboard::getAway()
{
	return away;
}

void Scoreboard::printScoreboard()
{
  std::cout << "\u001b[30m" << "------------------------------------------------------" << "\x1b[0m" << std::endl;
  std::cout << std::setw(25);
	std::cout << "\u001b[4m" << "\u001b[34;1m" << "AT&T Stadium" << "\x1b[0m" << std::endl;

  //Print team names
  std::cout << std::setw(20);
  std::cout << "\u001b[33;1m" << home.getName();
  std::cout << std::setw(30);
  std::cout << away.getName() << "\x1b[0m" << std::endl;
  
  //print scores
  std::cout << "\u001b[35;1m" << "Score:" << "\x1b[0m";
  std::cout << std::setw(10);
  std::cout << home.getScore();
  std::cout << std::setw(30);
  std::cout << away.getScore() << std::endl;

  //print timeouts left
  std::cout << "\u001b[35;1m" << "Timeouts:" << "\x1b[0m";
  std::cout << std::setw(7);
  std::cout << home.getTimeouts();
  std::cout << std::setw(30);
  std::cout << away.getTimeouts() << std::endl;

    std::cout << "\u001b[30m" << "------------------------------------------------------" << "\x1b[0m" << std::endl;


}
