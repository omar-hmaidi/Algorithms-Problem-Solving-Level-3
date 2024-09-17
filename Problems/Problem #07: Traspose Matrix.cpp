#include <iostream>

using namespace std;


void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{

	short Counter = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}


}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{


	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << arr[i][j] << "     ";
		}
		cout << "\n";
	}
}


void Test(int arr[3][3], int Rows, int Cols)
{



}

void TrasposeMatrix(int arr[3][3],int arrTraspose[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arrTraspose[i][j] = arr[j][i];
		}
	}
}


int main()
{

	int arr[3][3], arrTraspose[3][3];

	FillMatrixWithOrderedNumbers(arr, 3, 3);

	cout << "\nThe following is a 3x3 ordered matrix:\n";
	PrintMatrix(arr, 3, 3);

	TrasposeMatrix(arr, arrTraspose, 3, 3);

	cout << "\n\nThe Following is the transosed matrix\n";
	PrintMatrix(arrTraspose, 3, 3);

	system("pause>0");

	return 0;
}
