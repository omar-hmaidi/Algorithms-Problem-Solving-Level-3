#include <iostream>
#include <string>

using namespace std;


string ReadString()
{
	string S1;
	cout << "Please enter your string?\n";
	getline(cin, S1);
	return S1;
}

char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character?\n";
	cin >> Ch1;
	return Ch1;
}

char InvertCharcterCase(char Ch1)
{

	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);

}

short CountLetter(string S1, char Ch1, bool MatchCase = true)
{

	short Counter = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if (S1[i] == Ch1)
				Counter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(Ch1))
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

	cout << "\nLetter \'" << Ch1 << "\' ";
	cout << "Or \'" << InvertCharcterCase(Ch1);
	cout << "\' Count = " << CountLetter(S1, Ch1, false);

	system("pause>0");

	return 0;
}
