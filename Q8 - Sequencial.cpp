#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	cout << "Informe o primeiro n�mero: ";
	cin >> n1;
	cout << "Informe o segundo n�mero: ";
	cin >> n2;
	cout << "O resultado da divis�o arrendodado �: " << round(static_cast<float>(n1) / n2);
	
	return 0;
}
