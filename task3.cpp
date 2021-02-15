#include <iostream>
#include <new>

struct chaff
{
	char dross[20];
	int slag;
};

void fillStack(chaff * arr);
void showStack(const chaff * arr);

constexpr size_t BUF = 128;
constexpr size_t N = 5;
char buffer[BUF];

int main()
{
	using namespace std;

	chaff * p_struct = new (buffer) chaff[N];
	fillStack(p_struct);
	showStack(p_struct);

	return 0;
}

void fillStack(chaff * arr)
{
	size_t index = 0;
	while (index != N)
	{
		std::cout << "Enter a string: ";
		std::cin.get(arr[index].dross, 20);
		arr[index].slag += index;
		++index;
		std::cin.get();
	}
}

void showStack(const chaff * arr)
{
	size_t index = 0;
	while (index != N)
	{
		std::cout << "p_struct[" << index << "] = " << arr[index].dross << "; " << arr[index].slag << std::endl;
		++index;
	}
}