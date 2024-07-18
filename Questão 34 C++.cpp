#include <iostream>
#include <clocale>
#include <cstdlib>
#include <sstream>  // Para std::ostringstream

using namespace std;

string intToString(int num) {
    ostringstream oss;
    oss << num;
    return oss.str();
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int valor;
    cout << "Insira um n�mero: ";
    cin >> valor;
    
    string inversa = "";
    
    valor = abs(valor);
    
    while (valor > 0) {
        int digito = valor % 10;
        inversa = intToString(digito) + inversa;  // Adiciona o d�gito no in�cio da string
        valor = valor / 10;
    }
    
    if (inversa.empty()) {  // Para o caso em que o n�mero � 0
        inversa = "0";
    }
    
    cout << "Os d�gitos na ordem inversa s�o: " << inversa << endl;
    
    return 0;
}

