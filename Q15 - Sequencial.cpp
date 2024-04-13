#include <iostream>
#include <locale>
 #include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,delta,x,xnegativo;
	cout << "Digite os valores de a,b e c ";
	cin >> a >> b >> c;
	delta=(b * b) - 4 * a * c;
	x=-(b + sqrt(delta))/ 2 * a;
	xnegativo=(b - sqrt(delta)) / 2 * a;
	cout << "As raizes dessa equação do segundo grau é: " << x << ", " << xnegativo <<endl;
	
	return 0;
	
}
