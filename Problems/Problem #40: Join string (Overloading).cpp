#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector<string> vString, string Delim)
{

	string S1 = "";

	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}

	return	S1.substr(0, S1.length() - Delim.length());



}

string JoinString(string arrString[], short Length, string Delim)
{

	string S1 = "";

	for (short i = 0; i < Length; i++)
	{
		S1 = S1 + arrString[i] + Delim;
	}

	return	S1.substr(0, S1.length() - Delim.length());

}

int main()
{



	vector<string> vString = { "Omar","Jehad","Al-Hmaidi" };
	string arrSting[] = { "Omar", "Jehad", "Al-Hmaidi" };

	cout << "\nVector after join: \n";
	cout << JoinString(vString, " ");

	cout << "\n\nArray after join: \n";
	cout << JoinString(arrSting,3, " ");

	system("pause>0");
}
