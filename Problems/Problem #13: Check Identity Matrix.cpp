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

bool IsIdentityMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{

			if (i == j && Matrix[i][j] != 1)
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
		{ 1,0,0 },
		{ 0,1,0 },
		{ 0,0,1 }
	};

	cout << "Matrix1\n";
	PrintMatrix(Matrix, 3, 3);

	if (IsIdentityMatrix(Matrix, 3, 3))
		cout << "\nYES: Matrix is identity.";
	else
		cout << "\nNO:  Matrix is NOT identity.";

	system("pause>0");

	return 0;
}
