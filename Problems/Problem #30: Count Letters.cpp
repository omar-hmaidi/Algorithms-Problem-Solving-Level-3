#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String\n";
	getline(cin, S1);
	return S1;
}

char ReadChar()
{
	char Ch1;
	cout << "Please Enter a Character\n";
	cin >> Ch1;
	return Ch1;
}

short CountLetter(string S1, char Ch1)
{
	int Counter = 0;
	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] == Ch1)
		{
			Counter++;
		}
	}

	return Counter;
}

int main()
{
	string S1 = ReadString();
	char Ch1 = ReadChar();
	
	cout << "\nLetter \'" << Ch1 << "\' Count = " << CountLetter(S1, Ch1);
	
	system("pause>0");

	return 0;
}
