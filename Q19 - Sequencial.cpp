#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	string nome;
	float peso,altura;
	cout << "Insira seu Nome: ";
	getline(cin,nome);
	cout << "Digite o peso e a altura ";
	cin >>peso >> altura;
	cout << "O IMC é: " << peso / (altura * altura);
	return 0;
}
