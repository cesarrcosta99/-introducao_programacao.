#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    const int tamanho = 5;  // Usando um valor fixo para o tamanho do array
    int array[tamanho];
    
    for (int i = 0; i < tamanho; i++) {
        array[i] = (i + 1) * (i + 1);
    }
    
    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << endl;
    }
    
    return 0;
}

