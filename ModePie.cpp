#include <iostream>
using namespace std;
void ModePie(int *ptr, const int Size)
{
	int Frequency[10] = {0};
	int most;
	for (int index = 0; index < Size; index++)		//Cycles through the next spot in Array pointer
	{
		for (int index2 = 0; index2 < Size; index2++)
		{
			if (*(ptr + index) == *(ptr + index2))	//Frequency of pies ate
			{
				Frequency[index]++;					
			}
		}
	}
	most = 0;
	for (int index = 0; index < Size; index++)
	{
		if (Frequency[index] > most)
		most = index;
	}
	cout << "Mode of Slices of Pie eaten are: " << Frequency[most] << " out of a test sample of: " << Size<< endl;
	
}
