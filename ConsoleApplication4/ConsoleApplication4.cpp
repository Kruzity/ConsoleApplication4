#include <iostream>
#include<string>
using namespace std;


int main()
{
	string str;
	cout << "Vvedite slovo: ";
	cin.ignore();
	getline(cin, str);
	int pr;
	cout << "Vvedite nomer bukvi kotoruyu hotite udalit: ";
	cin >> pr;
	string n_str = str;
	for (int i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (i != pr - 1)
		{
			n_str[j] = str[i];
			j++;
		}
	}
	n_str[n_str.size() - 1] = '\0';
	cout << n_str;
}

