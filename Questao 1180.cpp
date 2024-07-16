#include <iostream>
 
using namespace std;
 
int main() {
   int N;
   cin>>N;
    
    int valor; 
    int menorValor;
    int posicao = 0;
    
    cin>> menorValor;
    for(int i=1;i<N;i++) {
        cin>>valor;
        if(valor<menorValor) {
            menorValor=valor;
            posicao=i;
            
        }
        
    } 
    
    cout<<"Menor valor: "<<menorValor<<endl;
    cout<<"Posicao: "<<posicao<<endl;
 
    return 0;
}
