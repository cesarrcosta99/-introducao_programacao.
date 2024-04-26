#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
    cout << "Número de 1 a 10,escolha um número,pra ver se vc acertou no sorteio";
    cin >> numero;
    srand(time(0));
    
    int numeroAleatorio=rand() % 10 + 1;
    
    if(numero == numeroAleatorio){
    	cout << "VocÊ Acertou!.Numero Aleatorio é: " << numeroAleatorio;
	} else{
		cout << "VC ERROU,Número aletorio é: "<< numeroAleatorio;
	}
	
	return 0;
	
}
