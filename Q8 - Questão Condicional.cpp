#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
    cout << "Informe um n�mero inteiro";
    cin >> num;
    if(num % 2 == 0){
    	cout << "Esse n�mero � par";
	} else {
		cout << "Esse n�mero � impar";
	}
	
	return 0;
}

