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

char InvertCharcterCase(char Ch1)
{
	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

string InvertAllStringLettersCase(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		S1[i] = InvertCharcterCase(S1[i]);
	}

	return S1;
}

int main()
{
	string S1 = ReadString();

	S1 = InvertAllStringLettersCase(S1);

	cout << S1 << endl;

	system("pause>0");

	return 0;
}
