#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
    float valor;
    cout << "Insira o valor de um produto";
    cin >> valor;
    if(valor < 20) {
    	cout << "O valor final do produtou ficou: R$" << valor * 1.40 ;
	} else{
		cout << "O valor final do produto ficou: R$" << valor * 1.30;
	}
	
	return 0;
}
