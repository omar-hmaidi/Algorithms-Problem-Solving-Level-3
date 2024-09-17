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


int CountNumberInMatrix(int Matrix[3][3], int Number, int Rows, int Cols)
{



	int NumberCount = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == Number)
			{
				NumberCount++;
			}
		}
	}

	return NumberCount;
}

bool IsSparseMatrix(int Matrix[3][3], short Rows, short Cols)
{
	short MatrixSize = Rows * Cols;
	return (CountNumberInMatrix(Matrix, 0, 3, 3) >= ceil((float)MatrixSize / 2));
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrixWithRandomNumbers(Matrix, 3, 3);

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	if (IsSparseMatrix(Matrix, 3, 3))

		cout << "YES: it is Sparse";
	else
		cout << "NO : it's not Sparse";

	system("pause>0");



	return 0;
}
