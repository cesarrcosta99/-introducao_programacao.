#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor1,valor2,temp;
	cout << "Informe o primeiro valor: ";
	cin >> valor1;
	cout << "Informe o segundo valor: ";
	cin >> valor2;
	temp=valor1;
	valor1=valor2;
	valor2=temp;
	cout << "O primeiro valor é : " << valor1 <<endl;
	cout << "O segundo valor é: " << valor2;
	
	return 0;
}
