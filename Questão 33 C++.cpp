#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int valor,soma=0;
    cout << "Insira um n�mero ";
    cin >> valor;
    
    valor=abs(valor);
    
    while(valor>0){
    	int digito=valor % 10;
    	if(digito % 2 ==0) {
    		soma=soma + digito;
		}
    	valor=valor / 10;
	}
	
	cout << "A soma dos digitos pares �: " << soma;
    
	return 0;
}

