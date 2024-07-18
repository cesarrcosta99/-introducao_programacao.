#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int quantidade, valor;
    float soma = 0; // Inicializa a vari�vel de soma para 0
    
    cout << "Digite a quantidade de n�meros: ";
    cin >> quantidade;
    
    if (quantidade <= 0) { // Verifica se a quantidade � v�lida
        cout << "Quantidade inv�lida. Deve ser um n�mero positivo." << endl;
        return 1; // Encerra o programa com c�digo de erro
    }
    
    cout << "Digite os " << quantidade << " n�meros:" << endl;
    
    for (int i = 0; i < quantidade; i++) {
        cin >> valor;
        soma += valor; // Acumula a soma dos n�meros
    }
    
    float media = soma / quantidade; // Calcula a m�dia
    
    cout << "A m�dia dos n�meros �: " << media << endl;
    
    return 0;
}

