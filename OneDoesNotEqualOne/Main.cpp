#include <iostream>

using namespace std;

int main()
{
	float num = 0;

	for (int i = 1; i < 11; i++)
		num += 0.1;

	if (num == 1)
		cout << "1 is equal to 1.\n";
	else
		cout << "1 does not equal 1.\n";

	return 0;
}