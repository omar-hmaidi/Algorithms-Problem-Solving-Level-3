#include <iostream>


using namespace std;


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

bool IsScalarMatrix(int Matrix[3][3], short Rows, short Cols)
{

	int FirstDiagElement = Matrix[0][0];

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{

			if (i == j && Matrix[i][j] != FirstDiagElement)
			{
				return false;
			}
			//Check for rest elements
			else if (i != j && Matrix[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int Matrix[3][3] = {
		{ 9,0,0 },
		{ 0,9,0 },
		{ 0,0,9 }
	};

	cout << "Matrix1\n";
	PrintMatrix(Matrix, 3, 3);

	if (IsScalarMatrix(Matrix, 3, 3))
		cout << "\nYES: Matrix is scalar.";
	else
		cout << "\nNO:  Matrix is NOT scalar.";

	system("pause>0");

	return 0;
}
