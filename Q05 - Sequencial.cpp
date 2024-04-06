#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor1,valor2,divisao;
	cout << "Informe o primeiro valor: ";
	cin >> valor1;
	cout << "Informe o segundo valor: ";
	cin >> valor2;
	
	if(valor2 == 0) {
		cout << "Não é possivel dividir por 0" << endl;
	}else{
	divisao=valor1 / valor2;
	cout << "O valor da divisão considerando a parte inteira é: " << divisao << endl;
	
	}
	
	return 0;
}
