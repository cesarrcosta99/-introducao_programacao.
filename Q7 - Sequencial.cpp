#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float angulo;
	cout << "Informe o Angulo: ";
	cin >> angulo;
	angulo=(angulo * M_PI) / 180;
	cout << "O seno do angulo �: " << sin(angulo) << endl;
	cout << "O cosseno do angulo � : " << cos(angulo) <<endl;
	
	return 0;
}
