#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	std::cout << "Enter a fullname: ";
	std::cin.getline(g.fullname, Len);

	if (g.fullname[0] != '\0')
	{
		std::cout << "Enter handicap: ";
		std::cin >> g.handicap;
		if(!(std::cin.good()))
			g.handicap = 0;
		std::cin.get();

		return 1;
	}
	else
	{
		g.flag = 1;

		return 0;
	}

	return -1;
}

void showgolf(const golf & g)
{
	std::cout << "Name: " << g.fullname << std:: endl;
	std::cout << "Handicap: " << g.handicap << std::endl;
}