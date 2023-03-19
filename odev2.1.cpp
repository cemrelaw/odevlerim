#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 3; i++)
	{
		for (int j = 1; j < 6; j++)
		{
			cout << j << " ";
		}
		cout << endl;

		for (int k = 0; k < 5; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int j = 1; j < 6; j++)
	{
		cout << j << " ";
	}

	return 0;
}