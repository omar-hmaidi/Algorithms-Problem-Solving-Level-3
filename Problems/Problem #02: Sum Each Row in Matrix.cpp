#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;


int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}


void PrintMatrix(int arr[3][3], short Rows, short Cols)
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

int RowSum(int arr[3][3], short RowNumber,short Cols)
{
	int Sum = 0;
	for (int j = 0; j <= Cols - 1; j++)
	{
		Sum += arr[RowNumber][j];
	}
	return Sum;
}

void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
{
	cout << "\nThe following are the sum of each row in the matrix:\n";
	for (int i = 0; i < Rows; i++)
	{
		cout << "Rows " << i + 1 << "Sum = "<< RowSum(arr,i,Cols) << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];


	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\n The following is a 3x3 random matrix:\n";

	PrintMatrix(arr, 3, 3);

	cout << "\n The following are the sum of each row in the matrix:\n";

	PrintEachRowSum(arr, 3, 3);

	system("pause>0");

	return 0;
}
