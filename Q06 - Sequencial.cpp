#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	float valor1;
	cout << "Informe o valor: ";
	cin >> valor1;
	cout << fixed << setprecision(2) << valor1;
	return 0;
}
