//golf.h - for 9.1.cpp
constexpr size_t Len = 40;

struct golf
{
	char fullname[Len];
	int handicap;
	size_t flag;
};

void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);
