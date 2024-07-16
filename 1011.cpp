#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>

using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	double R,VOLUME,pi;
	cin>>R;  
	pi=3.14159;
    VOLUME = (4.0/3) * pi * pow(R, 3);
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<VOLUME<<endl;
	return 0;
}

