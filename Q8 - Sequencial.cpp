#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	cout << "Informe o primeiro número: ";
	cin >> n1;
	cout << "Informe o segundo número: ";
	cin >> n2;
	cout << "O resultado da divisão arrendodado é: " << round(static_cast<float>(n1) / n2);
	
	return 0;
}
