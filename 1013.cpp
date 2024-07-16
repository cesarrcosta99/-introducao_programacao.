#include <iostream>
#include <iomanip>
#include <clocale>
#include <cmath>
using namespace std;

    int main() {
        setlocale (LC_ALL, "Portuguese");	
        int a, b, c, MAIORAB, MAIOR;
        cin>>a;
        cin>>b;
        cin>>c;
        MAIORAB=(a+b+abs(a-b))/2;
        MAIOR=(MAIORAB+c+abs(MAIORAB-c))/2;
        cout<<MAIOR<<" eh o maior"<<endl;   
        
    return 0;
}

