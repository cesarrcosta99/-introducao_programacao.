#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
float valor, mediaPositivos;
 int positivos = 0;
 double somaPositivos = 0;
  for(int i=0;i<6;i++) {
      cin>>valor;
      if(valor>0) {
          positivos=positivos+1;
          somaPositivos=somaPositivos+valor;
          
      }
      
  }
  mediaPositivos=somaPositivos/positivos;
  cout<<positivos<<" valores positivos"<<endl;
  cout<<fixed<<setprecision(1)<<mediaPositivos<<endl;
  
    return 0;
}
