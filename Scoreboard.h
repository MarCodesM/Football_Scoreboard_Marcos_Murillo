#ifndef SCOREBOARD_H
#define SCOREBOARD_H
#include "Team.h"

class Scoreboard
{
	private:
		Team home;
		Team away;
	public:
		void setHome(Team hTeam);
		void setAway(Team aTeam);

		Team getHome();
		Team getAway();

		void printScoreboard();
};

#endif // !SCOREBOARD_H
