#include <iostream>
using namespace std;

int main()
{
	int sayac = 0;
	
	for (int k = 0; k < 3; k ++)
	{	
		for (int i = 1; i < 6; i++)
		{
			cout << i << " ";
			
		}
		cout << endl;
		for (int j = 0; j < 5; j++)
		{		
			sayac++;	
			
			if (sayac > 10)
			{
				break;
			}
			cout << "* ";
		}  
		
		cout << endl;
	}


	
		
	
	cout << endl;

	return 0;
}