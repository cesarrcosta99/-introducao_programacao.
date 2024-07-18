#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int valor,soma=0;
    cout << "Insira um número";
    cin >> valor;
    
    valor=abs(valor);
    
    while(valor>0){
    	int digito=valor % 10;
    	soma=soma + digito;
    	valor=valor / 10;
	}
	
	cout << "A soma é: " << soma;
    
	return 0;
}

