#include <iostream>
#include <string>

using namespace std;


int main()
{
	string input;

	cout << "Please enter the string: " ;
	cin >> input;
	int limit = input.size();
	char tmp;
	int vowelCounter = 0;
	int consCounter = 0;

	for (int i = 0; i < limit; i++)
	{
		tmp = toupper(input[i]);
		switch(tmp)
		{
			case 'A' :
			case 'E' :
			case 'I' :
			case 'O' :
			case 'U' :
				vowelCounter++;
				break;
			default:
				consCounter++;
				break;
		}
	}

	cout << "\n\nNumber of vowels: "<< vowelCounter << endl << endl<<"Number of consonants: "<< consCounter<<endl;

	return 0;
}



