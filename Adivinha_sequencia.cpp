/*
Vamos desenvolver um código que capacita o computador a prever a sequência de 3 números.
*/

#include <iostream>

using namespace std;

int main() {
	int number_one{}, number_two{}, number_three{};

	cout << "Escreva o primeiro numero da sequencia: ";
	cin >> number_one;

	cout << "Escreva o segundo numero da sequencia: ";
	cin >> number_two;

	cout << "Escreva o terceiro numero da sequencia: ";
	cin >> number_three;

	int i = 0;

	while (number_one <= number_two) {
		number_one += 1;
		
		i += 1;
		if (number_one == number_two) {
			cout << "A sequencia e de: " << i << " em " << i;
		}
		else {
			continue;
		}
	}

	return 0;
}
