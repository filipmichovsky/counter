#include <iostream>

using namespace std;

int main() {

	int x;
	int pocet = 0;
	long long soucet = 0;
	int suda = 0;

	if (!(cin >> x) || x == 0) {
		cout << "Prazdny vstup\n";
		return 0;
	}

	int maximum = x;

	while (x != 0) {
		++pocet;
		soucet += x;

		if (x % 2 == 0) {
			++suda;
		}

		if (x > maximum) {
			maximum = x;
		}

		cin >> x;
	}

	cout << "Pocet: " << pocet << '\n';
	cout << "Soucet: " << soucet << '\n';
	cout << "Suda: " << suda << '\n';
	cout << "Maximum: " << maximum << '\n';

	return 0;
}