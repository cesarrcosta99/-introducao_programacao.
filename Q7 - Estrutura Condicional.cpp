#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3;
	cout << "Informe três números";
	cin >> n1 >> n2 >> n3;
	if(n1 < n2 && n2 < n3) {
		cout << "Ordem Crescente";
	}else if(n1 > n2 && n2 > n3) {
		cout << "Ordem Decrescente";
	}else {
		cout << "Fora de Ordem";
	}
	
	return 0;
}

