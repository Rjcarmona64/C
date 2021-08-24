#include <iostream>
using namespace std;

void sortScores(int scores[], int);
void displayScores(int scores[], int);

int main()
{
	const int SIZE = 5;
	int scores[SIZE];
	int score = -1;

	cout << "Enter 5 scores:" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cin >> score;
		scores[i] = score;
	}

	sortScores(scores, SIZE);

	cout << "\n\nTHE TOP SCORES:" << endl;
	displayScores(scores, SIZE);


	return 0;
}

void sortScores(int scores[], int size)
{
	int startScan, maxIndex, maxValue;

	for (startScan = 0; startScan < 4; startScan++)
	{
		maxIndex = startScan;
		maxValue = scores[startScan];
		for (int index = startScan + 1; index < 5; index++)
		{
			if (scores[index] > maxValue)
			{
				maxValue = scores[index];
				maxIndex = index;
			}
		}
		scores[maxIndex] = scores[startScan];
		scores[startScan] = maxValue;
	}
}

void displayScores(int scores[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << scores[i] << endl;
	}
}