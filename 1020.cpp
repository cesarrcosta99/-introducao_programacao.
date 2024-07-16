#include <iostream>
#include <iomanip>
#include <clocale>
#include <cmath>
using namespace std;

    int main() {
        setlocale (LC_ALL, "Portuguese");	
        int idade, qDIA=0, qMES=0, qANO=0;
        cin>>idade;
        qANO=idade/365;
        int diasRestantes = idade % 365;
        qMES = diasRestantes/30;
        qDIA = diasRestantes %30;
           
        cout<<qANO<< " ano(s)"<<endl;
    	cout<<qMES<< " mes(es)"<<endl;
    	cout<<qDIA<< " dia(s)"<<endl;
	
        
    return 0;

	}
