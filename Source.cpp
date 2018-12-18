Assignment: P.701-#5
Description: Pointer to an array that finds the mode of the number of pie slices the average person can eats.
*/
#include <iostream>
#include "Header.h"
using namespace std;
void main()
{
	const int Size = 10;
	int Array[Size] = { 1,2,3,3,3,4,4,5,6,7};
	int *ptr;
	ptr = Array;
	
	ModePie(ptr, Size);

	
}
