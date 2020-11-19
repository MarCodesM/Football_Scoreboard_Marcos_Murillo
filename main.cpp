/*
Name: Marcos Murillo
Date: 11/16/2020
Class: COSC 1437
Teacher: Dr. T
displays knowledge of classes (and classes using other classes as members)
*/

#include "Team.h"
#include "Scoreboard.h"
#include <iostream>
#include <unistd.h>

int main()
{
  Scoreboard board;
  Team homeTeam;
  Team awayTeam;
  std::string nameUpdate;
  char userInput;
  int scoreUpdate;
  int timeoutUpdate;

  homeTeam.setName("Cowboys");
  awayTeam.setName("Giants");

  board.setHome(homeTeam);
  board.setAway(awayTeam);

  do
  {
    system("clear");
    board.printScoreboard();

    //Menu
    std::cout << "N: Change Team Names" << std::endl;
    std::cout << "S: Change Team Scores" << std::endl;
    std::cout << "T: Change Team Timouts" << std::endl;
    std::cout << "E: Exit" << std::endl;
    std::cin >> userInput;

    if(userInput == 'N' || userInput == 'n')
    {
      std::cout << "Enter Home Team Name: ";
      std::cin >> nameUpdate;
      homeTeam.setName(nameUpdate);
      board.setHome(homeTeam);

      std::cout << "Enter Away Team Name: ";
      std::cin >> nameUpdate;
      awayTeam.setName(nameUpdate);
      board.setAway(awayTeam);

    }
    else if(userInput == 'S' || userInput == 's')
    {
      std::cout << "Enter " << homeTeam.getName() << " Score: ";
      std::cin >> scoreUpdate;
      homeTeam.setScore(scoreUpdate);
      board.setHome(homeTeam);

      std::cout << "Enter " << awayTeam.getName() << " Score: ";
      std::cin >> scoreUpdate;
      awayTeam.setScore(scoreUpdate);
      board.setAway(awayTeam);

    }
    else if(userInput == 'T' || userInput == 't')
    {
      std::cout << "How Many Timeouts Left For " << homeTeam.getName() << ": ";
      std::cin >> timeoutUpdate;
      homeTeam.setTimeout(timeoutUpdate);
      board.setHome(homeTeam);

      std::cout << "How Many Timeouts Left For " << awayTeam.getName() << ": ";
      std::cin >> timeoutUpdate;
      awayTeam.setTimeout(timeoutUpdate);
      board.setAway(awayTeam);
    }
    else
    {
      std::cout << "\nInvalid Input!!!!!" << std::endl;
      sleep(1);
    }
  }while(userInput != 'E' && userInput != 'e');
  
}