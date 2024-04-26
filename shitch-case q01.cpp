#include <iostream>
using namespace std;
#include <clocale>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int dia;
	cout << "Informe um dia da semana [1 a 7]";
	cin >> dia;
	switch(dia){
		case 1:
		case 7:
				cout << "Fim de semana";
				break;
	      case 2:
	      case 3:
	      case 4:
	      case 5:
	      case 6:
	     cout << "Dia util";
	     break;
	     default:
	    cout << "Dia invalido";
	}
	return 0;
}
