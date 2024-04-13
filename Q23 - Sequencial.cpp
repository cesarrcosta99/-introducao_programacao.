#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	string nome;
	float peso,quantidadeagua,quantidadecarboidrato,quantidadeproteina;
	cout << "Informe o nome e o seu  peso ";
	cin >> nome >> peso;
	quantidadeagua=(peso * 50) / 1000;
	quantidadecarboidrato=(6 * peso);
	quantidadeproteina=(2.5 * peso);
	cout << "quantidade de água em litros: " << quantidadeagua << " quantidade de carboidratos em g: " << quantidadecarboidrato << " quantidade de proteínas em g: " << quantidadeproteina;
	
	return 0;
}
