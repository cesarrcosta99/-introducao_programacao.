#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero;
	cout << "Digite um n�mero";
	cin >> numero;
	if(numero > 10000) {
		cout << "Investimento alto";
	} else {
		cout << "Investimento Baixo";
	}
	
	return 0;
}

