//Problem #01/3: 3x3 Random Matrix

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



int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];


	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\n The following is a 3x3 random matrix:\n";

	PrintMatrix(arr, 3, 3);

	system("pause>0");

	return 0;
}


	









//  Problem #02/3: Sum Each Row in Matrix

/*

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

*/


// Problem #03/3: Sum Each Row in Matrix in Array


/*

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

int RowSum(int arr[3][3], short RowNumber, short Cols)
{
	int Sum = 0;
	for (int j = 0; j <= Cols - 1; j++)
	{
		Sum += arr[RowNumber][j];
	}
	return Sum;
}

void SumMatrixRowsInArry(int arr[3][3], int arrSum[3], short Rows, short Cols)
{

	for (short i = 0; i < Rows; i++)
	{
		arrSum[i] = RowSum(arr, i, Cols);
	}

}

void PrintRowsSumArray(int arr[3], short Rows)
{
	cout << "\nThe following are the sum of each row in the matrix:\n";
	for (int i = 0; i < Rows; i++)
	{
		cout << "Row " << i + 1 << "Sum = " << arr[i] << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	int arrSum[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\n The following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	SumMatrixRowsInArry(arr, arrSum, 3, 3);

	PrintRowsSumArray(arrSum, 3);

	system("pause>0");

	return 0;
}

*/







//   Problem #04: Sum Each Col in Matrix

/*

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

*/











//   Problem #05: Sum Each Col in Matrix In Another Array


/*

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

*/











//  Problem #06: 3x3 Ordered Matrix

/*

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
	cout << "\nThe following is a 3x3 ordered matrix:\n";

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << arr[i][j] << "     ";
		}
		cout << "\n";
	}
}


int main()
{

	int arr[3][3];

	FillMatrixWithOrderedNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);

	system("pause>0");

	return 0;
}

*/










//   Problem #07: Traspose Matrix


/*

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

*/











//  Problem #08: Multiply Two Matrices

/*

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

void multiplyTwoMatrices(int Matrix1[3][3], int Matrix2[3][3], int multiplicationResult[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			multiplicationResult[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
		cout << "\n";
	}

}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3], multiplicationResult[3][3];

	FillMatrixWithRandomNumber(Matrix1, 3, 3);

	cout << "Matrix1:" << endl;
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumber(Matrix2, 3, 3);

	cout << "\nMatrix2:" << endl;
	PrintMatrix(Matrix2, 3, 3);

	multiplyTwoMatrices(Matrix1, Matrix2, multiplicationResult, 3, 3);

	cout << "\nResults:" << endl;
	PrintMatrix(multiplicationResult, 3, 3);

	system("pause>0");

	return 0;

}

*/









//  Problem #09: Print Middle Row and Col of Matrix


/*


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

*/




//   Problem #10: Sum of Matrix


/*

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

*/




//  Problem #11: Check Matrices Equality

/*

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
		for (int j = 0; j < Cols; j++)
		{
			Sum += Matrix[i][j];
		}
	}

	return Sum;
}

bool AreEqualMatrices(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols)
{
	return (SumMatrixNumbers(Matrix1, Rows, Cols) == SumMatrixNumbers(Matrix2, Rows, Cols)); // true or false
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3];

	FillMatrixWithRandomNumber(Matrix1, 3, 3);

	cout << "Matrix1:" << endl;
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumber(Matrix2, 3, 3);

	cout << "Matrix1:" << endl;
	PrintMatrix(Matrix2, 3, 3);

	if (AreEqualMatrices(Matrix1, Matrix2, 3, 3))
		cout << "\nYES: both martices.";
	else
		cout << "\nNO: both martices.";


	system("pause>0");

	return 0;

}

*/








//  Problem #12: Check Typical Matrices

/*

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

bool CheckTypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; i < Cols; j++)
		{
			if (Matrix1[i][j] != Matrix2[i][j])
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

	int Matrix1[3][3], Matrix2[3][3];

	FillMatrixWithRandomNumber(Matrix1, 3, 3);

	cout << "Matrix1:" << endl;
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumber(Matrix2, 3, 3);

	cout << "Matrix1:" << endl;
	PrintMatrix(Matrix2, 3, 3);


	if (CheckTypicalMatrices(Matrix1, Matrix2, 3, 3))
		cout << "\nYES: martices are typical.";
	else
		cout << "\nNO : martices are NOT typical.";


	system("pause>0");

	return 0;

}
*/










//  Problem #13: Check Identity Matrix


/*

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

*/










//  Problem #14: Check Scalar Matrix // يعني يكون الأرقام بتساوي بعض مو شرط 1



/*


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

*/












//   Problem #15: Count Number in Matrix


/*

#include <iostream>
#include <iomanip>

using namespace std;


int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
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
			cout << setw(3) << Matrix[i][j] << "     ";
		}
		cout << "\n";
	}
}

int ReadPositiveNumber(string Message)
{
	int Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int SearchOnNumber(int Matrix[3][3], int NumberToSearch, int Rows, int Cols)
{



	int Counter = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == NumberToSearch)
			{
				Counter++;
			}
		}
	}

	return Counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	int NumberToSearch = ReadPositiveNumber("Enter a positive number to count in matrix?");
	FillMatrixWithRandomNumbers(Matrix, 3, 3);

	cout << "Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << "Number " << NumberToSearch << " count in matrix is ";
	cout << SearchOnNumber(Matrix, NumberToSearch, 3, 3);

	system("pause>0");

	return 0;
}

*/








// 