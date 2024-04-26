#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
	cout << "Escolha uma das opções:PEDRA(1),Papel(2),tesoura(3)";
	cin >> numero;
	srand(time(0));
	int numeroAleatorio=rand() % 3 + 1;
	
	if(numero ==1 && numeroAleatorio==3){
		cout << "Você Ganhou!";
	} else if(numero == 2 && numeroAleatorio == 1) {
		cout << "Vc ganhou!";
	} else if(numero ==3 && numeroAleatorio == 2){
		cout << "Vc ganhou!";
	} else{
		if(numero==1 && numeroAleatorio == 1) {
			cout << "Empate";
		}else if(numero ==2 && numeroAleatorio ==2){
			cout << "Empate";
		} else if(numero ==3 && numeroAleatorio ==3){
			cout << "Empate";
		} else{
			cout << "VC PERDEU!";
		}
	}
	
	return 0;
}
	

	
	
