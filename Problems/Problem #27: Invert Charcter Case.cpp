#include <iostream>
#include <string>

using namespace std;

char ReadChar()
{
	char Ch1;
	cout << "Please enter a Character:\n";
	cin >> Ch1;
	return Ch1;
}

char InvertCharcterCase(char Ch1)
{

	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);

}

int main()
{
	char Ch1 = ReadChar();

	Ch1 = InvertCharcterCase(Ch1);

	cout << "\nChar after inverting case:\n";
	cout << Ch1 << endl;

	system("pause>0");

	return 0;
}
