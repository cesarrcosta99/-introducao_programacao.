#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero;
	cout << "Digite um número";
	cin >> numero;
	if(numero > 0){
		cout << "Positivo";
	} else if(numero < 0){
		cout << "Negativo";
	} else{
		cout << "Neutro";
	}
	
	return 0;
}

