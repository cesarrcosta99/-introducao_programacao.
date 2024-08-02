#include <iostream>
#include <clocale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float maior=-10000000000000;
	float menor=1000000000000;
	float array[5]={2,0.4,500,1,2};
	
	for(int i=0;i < 5;i++){
		if(array[i] > maior){
			maior=array[i];
		}
		
		if(array[i] < menor){
			menor=array[i];
		}
	}
	
	cout << "O menor é: " << menor<<endl;
	cout << "O maior é: " << maior << endl;
	
	return 0;
}
