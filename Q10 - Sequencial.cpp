#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1;
	cout << "Informe o número: ";
	cin >> n1;
	cout << "O valor absoluto é:  " << fabs(n1);
	
	return 0;
}
