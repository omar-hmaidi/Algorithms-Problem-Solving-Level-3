#include <iostream>
#include <iomanip>

using namespace std;


int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Matrix[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int Matrix[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << Matrix[i][j] << "     ";
		}
		cout << "\n";
	}
}

int ReadPositiveNumber(string Message)
{
	int Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int CountNumberInMatrix(int Matrix[3][3], int NumberCount, int Rows, int Cols)
{



	int Counter = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == NumberCount)
			{
				Counter++;
			}
		}
	}

	return Counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	int NumberCount = ReadPositiveNumber("Enter a positive number to count in matrix?");
	FillMatrixWithRandomNumbers(Matrix, 3, 3);

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << "Number " << NumberCount << " count in matrix is ";
	cout << CountNumberInMatrix(Matrix, NumberCount, 3, 3);

	system("pause>0");

	return 0;
}
