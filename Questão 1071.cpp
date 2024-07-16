#include <iostream>
#include <clocale>

using namespace std;

int main() {
    int X, Y;
    cin>>X>>Y;
    int somaImpares=0;
    int menor = X < Y ? X : Y;
    int maior = X > Y ? X : Y;
    for (int i = menor + 1; i < maior; ++i) {
        if (i % 2 != 0) {
            somaImpares += i;
        }
    }
    cout<<somaImpares<<endl;
    
    return 0;
}


