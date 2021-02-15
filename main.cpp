#include <iostream>
#include "golf.h"

constexpr size_t AmountOfPeople = 3;

int main()
{
	using namespace std;

	golf member[AmountOfPeople] = {};
	size_t index = 0;

	while (index < AmountOfPeople)
	{
		setgolf(member[index]);

		if (member[index].flag == 1)
			break;
		showgolf(member[index]);
		++index;
	}

	golf Andy;
	setgolf(Andy, "Andy Panda", 25);

	cout << "<<Overload function>>" << endl;
	cout << "Andy: " << endl;
	cout << Andy.fullname << ", " << Andy.handicap << endl;

	return 0;
}