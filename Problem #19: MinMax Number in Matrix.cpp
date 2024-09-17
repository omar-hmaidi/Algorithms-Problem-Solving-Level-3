#include <iostream>
#include <cstdlib>
#include <iomanip>

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
			cout << Matrix[i][j] << "     ";
		}
		cout << "\n";
	}
}

int MinNumberInMatrix(int Matrix[3][3], int Rows, int Cols)
{

	int Min = Matrix[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{

			if (Matrix[i][j]<Min)
			{
				Min = Matrix[i][j];
			}
		}
	}

	return Min;
}

int MaxNumberInMatrix(int Matrix[3][3], int Rows, int Cols)
{

	int Max= Matrix[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{

			if (Matrix[i][j] > Max)
			{
				Max= Matrix[i][j];
			}
		}
	}

	return Max;
}



int main()
{

	srand((unsigned)time(NULL));


	int Matrix[3][3];

	FillMatrixWithRandomNumbers(Matrix, 3, 3);

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << "\nMinimum Number is:";
	cout << MinNumberInMatrix(Matrix, 3, 3);

	cout << "\n\nMaximum Number is:";
	cout << MaxNumberInMatrix(Matrix, 3, 3);

	system("pause>0");




	return 0;

}
