#include <iostream>
#include <locale>

using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero;
	int inteiro;
	cout << "Informe um n�mero decimal";
	cin >> numero;
	inteiro=numero;
	cout << "A parte fracionada do n�mero �: " << numero - inteiro;
	return 0;
}
