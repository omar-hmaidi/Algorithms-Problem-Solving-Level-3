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




void PrintMiddleRowOfMatrix(int Matrix[3][3], int Cols)
{
	short MiddleCol = Cols / 2;
	for (short j = 0; j < Cols; j++)
	{
		printf("%0*d     ", 2, Matrix[MiddleCol][j]);
	}
}

void PrintMiddleColOfMatrix(int Matrix[3][3], int Rows)
{
	short MiddleRow = Rows / 2;
	for (int i = 0; i < Rows; i++)
	{
		printf("%0*d     ", 2, Matrix[i][MiddleRow]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrixWithRandomNumber(Matrix, 3, 3);

	cout << "Matrix1:" << endl;
	PrintMatrix(Matrix, 3, 3);


	cout << "\nMiddle Row Of Matrix is:" << endl;
	PrintMiddleRowOfMatrix(Matrix, 3);

	cout << "\n\nMiddle Col of Matrix is:" << endl;
	PrintMiddleColOfMatrix(Matrix, 3);


	system("pause>0");

	return 0;

}
