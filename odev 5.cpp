#include <iostream>
using namespace std;

int main()
{
	int sayac = 0;
	for (int i = 0; i < 2; i++)
	
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "- ";
		}

		cout << endl;

		for (int k = 0; k < 5; k++)
		{
			sayac++;
			cout << "# ";
		}
		cout << endl;

		for (int m = 0; m < 5; m++)
		{
			if (sayac > 9)
		{
			continue;
		}
			else
			{
				cout << "# ";
			}
		}
		cout << endl; 
	}


	return 0;
}