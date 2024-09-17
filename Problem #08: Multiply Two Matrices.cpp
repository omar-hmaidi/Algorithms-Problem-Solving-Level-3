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

void multiplyTwoMatrices(int Matrix1[3][3], int Matrix2[3][3], int multiplicationResult[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			multiplicationResult[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
		cout << "\n";
	}

}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3], multiplicationResult[3][3];

	FillMatrixWithRandomNumber(Matrix1, 3, 3);

	cout << "Matrix1:" << endl;
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumber(Matrix2, 3, 3);

	cout << "\nMatrix2:" << endl;
	PrintMatrix(Matrix2, 3, 3);

	multiplyTwoMatrices(Matrix1, Matrix2, multiplicationResult, 3, 3);

	cout << "\nResults:" << endl;
	PrintMatrix(multiplicationResult, 3, 3);

	system("pause>0");

	return 0;

}
