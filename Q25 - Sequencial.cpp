#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float angulo;
	cout << "Digite uma temperatura Fahrenheit";
	cin >> angulo;
	cout << "na escala Celsius: " << 5.0/9.0 * (angulo - 32);
	
	return 0;
}
