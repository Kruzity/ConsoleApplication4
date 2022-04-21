#include <iostream>
#include<string>
using namespace std;


int main()
{
	string str;
	cout << "Vvedite slovo: ";
	cin.ignore();
	getline(cin, str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '.') str[i] = '!';
	}
	cout << "\n" << str;
}

