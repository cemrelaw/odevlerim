#include <iostream>
using namespace std;

int main()
{
	int sayac = 0;

	for (int j = 0; j < 5; j++)

	{
		for (int i = 0; i < 2; i++)
		{
			cout << "# " << "- ";
			sayac++;
			if (sayac % 2 == 0)
			{
				break;
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