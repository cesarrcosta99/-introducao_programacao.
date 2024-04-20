#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,n3,maior,menor;
	cout << "Insira três números";
	cin >> n1 >> n2 >> n3;
	maior=n1;
	menor=n1;
	
	if(n2 > maior){
		maior=n2;
	}
	if(n3 > maior){
		maior=n3;
	}
	
	if(n2 < menor){
		menor=n2;
	}
	
	if(n3 < menor){
		menor=n3;
	}
	
	cout << "Maior: " << maior <<endl;
	cout << "Menor: " << menor << endl;
	
	return 0;
}
