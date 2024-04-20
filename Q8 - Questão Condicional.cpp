#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
    cout << "Informe um número inteiro";
    cin >> num;
    if(num % 2 == 0){
    	cout << "Esse número é par";
	} else {
		cout << "Esse número é impar";
	}
	
	return 0;
}

