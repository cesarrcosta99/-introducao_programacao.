#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	string nome;
	nome="c�sarr";
	cout << "C�sar tem " << nome.length() << " caractere";
	
	return 0;
}
