#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	string n1,n2,n3;
	float t1,t2,t3,menor,segundo,terceiro;
	cout << "Digite o nome do primeiro participante ";
	cin >> n1;
	cout << "Digite o nome do segundo participante ";
	cin >> n2;
	cout << "Digite o nome do terceiro participante ";
	cin >> n3;
	cout << "Digite o tempo de " << n1 << " ";
	cin >> t1;
	cout << "Digite o tempo de " << n2 << " ";
	cin >> t2;
	cout << "Digite o tempo de " << n3 << " ";
	cin >> t3;
	
	if(t1 < t2 && t1 < t3 ) {
		cout << "Campeão: " << n1<<endl;
		if(t2 < t3){
			cout << "Vice-Campeão: " << n2 <<endl;
			cout << "Terceiro-lugar: " << n3 <<endl;
		} else{
			cout << "Vice-Campeão: " << n3 <<endl;
			cout << "Terceiro-lugar: " << n2 <<endl;
		}
	} else if(t2 < t1 && t2 < t3){
		cout << "Campeão: " << n2 <<endl;
		if(t1 < t3){
			cout << "Vice-Campeão: " << n1<<endl;
			cout << "Terceiro-lugar: " << n3<<endl;
		} else{
				cout << "Vice-Campeão: " << n3<<endl;
			cout << "Terceiro-lugar: " << n1<<endl;
		}
	} else{
		cout << "Campeão: " << n3 <<endl;
		if(t1 < t2){
				cout << "Vice-Campeão: " << n1<<endl;
			cout << "Terceiro-lugar: " << n2<<endl;
		} else{
			cout << "Vice-Campeão: " << n2<<endl;
			cout << "Terceiro-lugar: " << n1<<endl;
		}
	}
	
	return 0;
	
}
