#ifndef TEAM_H
#define TEAM_H
#include <string>


class Team
{
	private:
		std::string name;
		bool home_status;
		int score;
		int timeouts;
	public:
		Team();

		void setName(std::string n);
		void setScore(int s);
		void setTimeout(int t);
		void setHomeStatus(bool h);

		std::string getName();
		int getScore() const;
		int getTimeouts() const;
		bool getHomeStatus() const;
};

#endif // !TEAM_H
