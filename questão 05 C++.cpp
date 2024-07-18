#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    for(int i=1;i <=50;i++){
    	if(i % 4 == 0 || i % 5 == 0){
    		continue;
		} 
			cout << i <<endl;
		
	}
	
	return 0;
}

