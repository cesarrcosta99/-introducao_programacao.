#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
    float valor;
    cout << "Insira o valor de um produto";
    cin >> valor;
    if(valor > 100){
    	cout << "O valor com o desconto aplicado fica: R$" << valor * 0.95;
	} else{
		cout << "O valor do produto continua o mesmo";
	}
	return 0;
}
