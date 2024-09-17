#include <iostream>
#include <cstdlib>
#include <iomanip>


using namespace std;

int RandomNumber(int From, int To)
{

	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;

}

void FillMatrixWithRandomNumbers(int MatrixArray[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			MatrixArray[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int MatrixArr[3][3], short Rows, short Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << MatrixArr[i][j] << "     ";
		}
		cout << "\n";
	}

}

int ColSum(int MatrixArr[3][3], short Rows, short Cols)
{

	int Sum = 0;
	for (int i = 0; i <= Rows - 1; i++)
	{
		Sum += MatrixArr[i][Cols];
	}

	return Sum;
}


void SumMatrixColsInArray(int MatrixArr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (short i = 0; i < Cols; i++)
	{
		arrSum[i] = ColSum(MatrixArr, Rows, i);
	}
}

void PrintColsSumArray(int arr[3], short Cols)
{
	cout << "\nThe following are the sum of each col in the Matrix:\n";
	for (int i = 0; i < Cols; i++)
	{
		cout << "Col " << i + 1 << " Sum = " << arr[i] << endl;
	}
}






int main()
{
	srand((unsigned)time(NULL));

	int MatrixArr[3][3], arr[3];

	FillMatrixWithRandomNumbers(MatrixArr, 3, 3);

	cout << "\nThe following is a 3x3 random matrix:\n";

	PrintMatrix(MatrixArr, 3, 3);

	SumMatrixColsInArray(MatrixArr, arr, 3, 3);

	PrintColsSumArray(arr, 3);

	system("pause>0");


	return 0;
}
