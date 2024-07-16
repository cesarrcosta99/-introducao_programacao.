#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	double valor;
	cin>>valor;
	if (valor >= 0 && valor <= 25.0000) {
		cout<<"Intervalo [0,25]"<<endl;
	} else if (valor >25.0000 && valor <= 50.0000) {
		cout<<"Intervalo (25,50]"<<endl;		
	} else if (valor >50.0000 && valor <= 75.0000) {
		cout<<"Intervalo (50,75]"<<endl;		
	} else if (valor >75.0000 && valor <= 100.0000) {
		cout<<"Intervalo (75,100]"<<endl;
	} else {
	    cout<<"Fora de intervalo"<<endl;
	}		
		
	return 0;
}

