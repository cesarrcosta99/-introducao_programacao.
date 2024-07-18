#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int quantidade, valor;
    float soma = 0; // Inicializa a variável de soma para 0
    
    cout << "Digite a quantidade de números: ";
    cin >> quantidade;
    
    if (quantidade <= 0) { // Verifica se a quantidade é válida
        cout << "Quantidade inválida. Deve ser um número positivo." << endl;
        return 1; // Encerra o programa com código de erro
    }
    
    cout << "Digite os " << quantidade << " números:" << endl;
    
    for (int i = 0; i < quantidade; i++) {
        cin >> valor;
        soma += valor; // Acumula a soma dos números
    }
    
    float media = soma / quantidade; // Calcula a média
    
    cout << "A média dos números é: " << media << endl;
    
    return 0;
}

