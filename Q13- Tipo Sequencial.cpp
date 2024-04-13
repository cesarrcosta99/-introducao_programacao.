#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float valor;
	cout << "Informe um número";
	cin>> valor;
	cout << "A raiz cubica desse número é: " << pow(valor,1.0/3.0);
	
	return 0;
	
}
