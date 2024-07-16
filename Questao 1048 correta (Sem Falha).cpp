#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    float salario;
    cin >> salario;

   if (salario >= 0 && salario <= 400.00) {
        float reajuste = salario * 0.15;
        float novoSalario = salario + reajuste;
        cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 15 %" << endl;
        
    } else if (salario >= 400.01 && salario <= 800.00) {
        float reajuste = salario * 0.12;
        float novoSalario = salario + reajuste;
        cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 12 %" << endl;
        
    } else if (salario >= 800.01 && salario <= 1200.00) {
        float reajuste = salario * 0.10;
        float novoSalario = salario + reajuste;
        cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 10 %" << endl;
       
    } else if (salario >= 1200.01 && salario <= 2000.00) {
        float reajuste = salario * 0.07;
        float novoSalario = salario + reajuste;
        cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 7 %" << endl;
        
    } else if (salario > 2000.00) {
        float reajuste = salario * 0.04;
        float novoSalario = salario + reajuste;
        cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 4 %" << endl;
        
    }
    
        return 0;
}
