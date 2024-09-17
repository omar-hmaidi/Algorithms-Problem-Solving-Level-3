#include <iostream>
#include <cstdio>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillMatrixWithRandomNumber(int Matrix[3][3], int Rows, int Cols)
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
			printf("%0*d     ", 2, Matrix[i][j]);
		}
		cout << "\n";
	}
}

bool CheckTypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; i < Cols; j++)
		{
			if (Matrix1[i][j] != Matrix2[i][j])
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3];

	FillMatrixWithRandomNumber(Matrix1, 3, 3);

	cout << "Matrix1:" << endl;
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumber(Matrix2, 3, 3);

	cout << "Matrix1:" << endl;
	PrintMatrix(Matrix2, 3, 3);


	if (CheckTypicalMatrices(Matrix1, Matrix2, 3, 3))
		cout << "\nYES: martices are typical.";
	else
		cout << "\nNO : martices are NOT typical.";


	system("pause>0");

	return 0;

}
