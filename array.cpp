#include <iostream>
#include <clocale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int array[5]={1,2,3,4,5};
	
	for(int i=0;i < 5;i++){
		cout << array[i];
	}
	return 0;
}
