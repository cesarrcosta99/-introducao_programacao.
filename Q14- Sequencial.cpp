#include <iostream>
#include <locale>

using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero;
	int inteiro;
	cout << "Informe um número decimal";
	cin >> numero;
	inteiro=numero;
	cout << "A parte fracionada do número é: " << numero - inteiro;
	return 0;
}
