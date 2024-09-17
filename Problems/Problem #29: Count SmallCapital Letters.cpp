#include <iostream>
#include <string>

using namespace std;

enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, AllLetters = 2 };

string ReadString()
{
	string S1;
	cout << "Please enter your string?\n";
	getline(cin, S1);
	return S1;
}

short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::AllLetters)
{
	if (WhatToCount == enWhatToCount::AllLetters)
	{
		return S1.length();
	}

	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{

		if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
			Counter++;

		if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
			Counter++;
	}

	return Counter;

}

short CountCapitalLetters(string S1)
{
	short Counter = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
			Counter++;
	}
	return Counter;

}

short CountSmallLetters(string S1)
{
	short Counter = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (islower(S1[i]))
			Counter++;
	}
	return Counter;

}

int main()
{
	string S1 = ReadString();

	cout << "\nMethod 1:\n";

	cout << "\nString Length = " << S1.length();
	cout << "\nCapital Letters Count = " << CountCapitalLetters(S1);
	cout << "\nSmall Letters Count = " << CountSmallLetters(S1);

	cout << "\n\nMethod 2:\n"; // Using Generic Function

	cout << "\nString Length = " << CountLetters(S1, enWhatToCount::AllLetters);
	cout << "\nCapital Letters Count = " << CountLetters(S1, enWhatToCount::CapitalLetters);
	cout << "\nSmall Letters Count = " << CountLetters(S1, enWhatToCount::SmallLetters);

	system("pause>0");

	return 0;
}
