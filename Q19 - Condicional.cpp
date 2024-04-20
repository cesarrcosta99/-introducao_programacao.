#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float temp1,temp2,temp3,menor,maior,vice;
	cout << "Insira os três tempos: ";
	cin >> temp1 >> temp2 >> temp3;
	menor=temp1;
	maior=temp1;
	if(temp2 < menor ){
		menor=temp2;
	}

	if(temp3 < menor){
		menor=temp3;
	}
	
	if(temp2 > maior) {
		maior=temp2;
	}
	
	if(temp3 > maior){
		maior=temp3;
	}
	
	if(temp1 != maior && temp1 !=menor){
		vice=temp1;
	}else if(temp2 != maior && temp2 !=menor){
		vice=temp2;
	} else{
		vice=temp3;
	}
	
	cout << "O campeão é o rapaz do tempo: " << menor <<endl;
	cout << "O vice campeão é o rapaz do tempo: " << vice <<endl;
	cout << "O terceiro colocado é o rapaz do tempo: " << maior <<endl;
	
	return 0;
}
