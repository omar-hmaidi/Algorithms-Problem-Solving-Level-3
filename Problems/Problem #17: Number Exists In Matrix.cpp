#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Matrix[i][j] = RandomNumber(0, 1);
		}
	}

}

void PrintMatrix(int Matrix[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << Matrix[i][j] << "     ";
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

bool IsExistsInMatrix(int Matrix[3][3], int NumberToSearch, short Rows, short Cols)

{




	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == NumberToSearch)
			{
				return true;
			}
		}
	}

	return false;

}


int main()
{

	srand((unsigned)time(NULL));

	int Matrix[3][3];

	int NumberToCheck = ReadPositiveNumber("Please enter the number to look for in matrix? ");

	FillMatrixWithRandomNumbers(Matrix, 3, 3);

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	if (IsExistsInMatrix(Matrix, NumberToCheck, 3, 3))

		cout << "Yes it is there.";
	else
		cout << "No it is not there.";

	system("pause>0");



	return 0;
}
