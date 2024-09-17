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

int SumMatrixNumbers(int Matrix[3][3], int Rows, int Cols)
{
	int Sum = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0;  j < Cols;  j++)
		{
			Sum += Matrix[i][j];
		}
	}

	return Sum;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrixWithRandomNumber(Matrix, 3, 3);

	cout << "Matrix1:" << endl;
	PrintMatrix(Matrix, 3, 3);

	cout << "\Sum Of Matrix is: "<< SumMatrixNumbers(Matrix, 3, 3);





	system("pause>0");

	return 0;

}
