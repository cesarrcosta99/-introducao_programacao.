#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

    int main() {
        setlocale (LC_ALL, "Portuguese");	
	    int a, b, PROD;
	    cin>>a;
	    cin>>b;
	    PROD= a*b;
	    cout<<"PROD = "<<PROD<<endl;
	    
    return 0;
}
