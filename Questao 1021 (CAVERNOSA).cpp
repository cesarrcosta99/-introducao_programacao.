#include <iostream>
#include <iomanip>

using namespace std;
	int main () {
	double valor;
	cin>>valor;
	int notas100=0, notas50=0, notas20=0, notas10=0, notas5=0, notas2=0;
	int moedas1=0, moedas050=0, moedas025=0, moedas010=0, moedas005=0, moedas001=0;
	int centavos=static_cast<int>(valor*100);
	
	notas100=centavos/10000;
	
	centavos%=10000;
	notas50=centavos/5000;
	
	centavos%=5000;
	
	notas20=centavos/2000;
	centavos%=2000;
	
	notas10=centavos/1000;
	centavos%=1000;
	
	notas5=centavos/500;
	centavos%=500;
	
	notas2=centavos/200;
	centavos%=200;

	moedas1=centavos/100;
	centavos%=100;	
	
	moedas050=centavos/50;
	centavos%=50;
	
	moedas025=centavos/25;
	centavos%=25;

	moedas010=centavos/10;
	centavos%=10;
	
	
	moedas005=centavos/5;
	centavos%=5;
	
	
	moedas001=centavos;
	
	cout<<"NOTAS:"<<endl;
	cout<<notas100<<" nota(s) de R$ 100.00"<<endl;
	cout<<notas50<<" nota(s) de R$ 50.00"<<endl;
	cout<<notas20<<" nota(s) de R$ 20.00"<<endl;
	cout<<notas10<<" nota(s) de R$ 10.00"<<endl;
	cout<<notas5<<" nota(s) de R$ 5.00"<<endl;
	cout<<notas2<<" nota(s) de R$ 2.00"<<endl;
	cout<<"MOEDAS:"<<endl;
	cout<<moedas1<<" moeda(s) de R$ 1.00"<<endl;
	cout<<moedas050<<" moeda(s) de R$ 0.50"<<endl;
	cout<< moedas025<<" moeda(s) de R$ 0.25"<<endl;
	cout<<moedas010<<" moeda(s) de R$ 0.10"<<endl;
	cout<< moedas005<<" moeda(s) de R$ 0.05"<<endl;
	cout<<moedas001<<" moeda(s) de R$ 0.01"<<endl;
	
		return 0;
		
	}
