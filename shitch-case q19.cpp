#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
    cout << "N�mero de 1 a 10,escolha um n�mero,pra ver se vc acertou no sorteio";
    cin >> numero;
    srand(time(0));
    
    int numeroAleatorio=rand() % 10 + 1;
    
    if(numero == numeroAleatorio){
    	cout << "Voc� Acertou!.Numero Aleatorio �: " << numeroAleatorio;
	} else{
		cout << "VC ERROU,N�mero aletorio �: "<< numeroAleatorio;
	}
	
	return 0;
	
}
