#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;


int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}


void FillMatrixWithRandomNumbers(int arr[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}

}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{


	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "     ";
		}
		cout << "\n";
	}

}


int ColSum(int arr[3][3], int Rows, int Cols)
{

	int Sum = 0;
	for (int i = 0; i <= Rows - 1; i++)
	{
		Sum += arr[i][Cols];
	}
	return Sum;
}

void PrintEachColSum(int arr[3][3], int Rows, int Cols)
{
	cout << "\nThe the following are the sum of each col in the matrix:\n";
	for (int j = 0; j < Cols; j++)
	{
		cout << "Col " << j + 1 << " Sum= " << ColSum(arr, Rows, j) << endl;
	}
}



int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\nThe following is a 3x3 random matrix:\n";

	PrintMatrix(arr, 3, 3);

	PrintEachColSum(arr, 3, 3);

	system("pause>0");


	return 0;
}
