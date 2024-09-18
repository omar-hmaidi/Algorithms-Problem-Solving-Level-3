#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

bool IsVowel(char Ch1)
{

	Ch1 = tolower(Ch1);

	return ((Ch1 == 'a' || Ch1 == 'e' || Ch1 == 'i' || Ch1 == 'o' || Ch1 == 'u'));

}

void PrintVowel(string S1)
{

	cout << "\nVowels in string are: ";

	for (int i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
			cout << S1[i] << "   ";
		
	}

	
}

int main()
{

	string S1 = ReadString();

	 PrintVowel(S1);

	system("pause>0");

	return 0;
}
