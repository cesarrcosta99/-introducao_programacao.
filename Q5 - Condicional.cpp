#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
	cout << "Digite um n�mero";
	cin >> numero;
	if(numero > 20)
	  cout << "a metade dele �: " << (float) numero / 2;
	return 0;
}

