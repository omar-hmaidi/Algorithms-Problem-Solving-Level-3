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
			printf(" %0*d   ", 2, Matrix[i][j]);
		}
		cout << "\n";
	}
}


bool IsPalindromeNumber(int Matrix[3][3], int Rows, int Cols)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols / 2; j++)
		{
			if (Matrix[i][j] != Matrix[i][Cols-1-j])
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


	int Matrix[3][3] = {
		{1,3,1},
		{5,2,5},
		{9,4,9}
	};

	//FillMatrixWithRandomNumbers(Matrix, 3, 3);

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	if (IsPalindromeNumber(Matrix, 3, 3))
	{
		cout << "Yes: Matrix is Palindrome\n";
	}
	else
		cout << "NO : Matrix is Not Palindrome\n";

	system("pause>0");




	return 0;

}
