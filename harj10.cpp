/*****IIZO1010******
Ryhmä: IIO14S2
Harjoitus 10
Kuvaus: Ohjelma laskee syötetyistä kokonaisluvuista 
		sekä positiivisten että negatiivisten kokonaislukujen osuuden. 
		Lukujen syöttä lopetetaan syöttämällä luku 0.
Tekijä: Joel Kortelainen
Versio: 1.0
1.10.2014
*/

#include <iostream>
using namespace std;

int main()
{
	int pos = 0;
	int neg = 0;
	int number;
	
	while (true)
	{
		system("CLS");
		cout << "Insert number " << pos + neg + 1 << " ";
		cin >> number;

		if (number != 0)
			if (number < 0)
				neg++;
			else
				pos++;
		else
			break;
	}

	system("CLS");
	cout << "Total numbers: " << pos + neg << endl;
	cout << "Total number percentage: " << (neg + pos) / (neg + pos) * 100 << " %" << endl;
	cout << "Positive numbers: " << pos << endl; 
	cout << "Positive number percentage: " << (float)pos / (neg + pos) * 100 << " %" << endl;
	cout << "Negative numbers: " << neg << endl;
	cout << "Negative number percentage: " << (float)neg / (neg + pos) * 100 << " %" << endl;
	
	return(0);
}