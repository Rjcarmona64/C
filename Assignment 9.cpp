#include <iostream>
#include <iomanip>
using namespace std;

void fillArray(int nums[][10], int);
void printArray(int nums[][10], int);

int main()
{
	const int SIZE = 10;
	int nums[SIZE][SIZE];
	
	fillArray(nums, SIZE);
	printArray(nums, SIZE);


	return 0;
}

void fillArray(int nums[][10], int limit)
{

	for (int i = 0; i < limit; i++) 
	{
		for (int j = 0; j < limit; j++)
		{
			nums[i][j] = (i + 1)*(j + 1);
		}
	}
}

void printArray(int nums[][10], int limit)
{
	for (int i = 0; i < limit; i++)
	{
		for (int j = 0; j < limit; j++)
		{
			cout << setw(4) << nums[i][j];
		}
		cout << endl;
	}
}
