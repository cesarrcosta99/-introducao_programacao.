#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float cateto1,cateto2;
	cout << "Insira os catetos de um triangulo: ";
	cin >> cateto1 >> cateto2;
	cout << "A hipotenusa desse triangulo é: " << sqrt(cateto1 * cateto1 + cateto2 * cateto2);
	return 0;
}
