#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
	int chs = 0;
	cout << "Vvedite slovo: ";
	cin.ignore();
	getline(cin, str);
	char letter;
	cout << "enter looking letter: ";
	cin >> letter;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == letter) chs++;
	}
	cout << "Letter " << letter << " vstrechayestya v slove " << chs << " raz" << endl;
}

