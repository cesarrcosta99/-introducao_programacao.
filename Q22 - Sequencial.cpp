#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	string nome="cesar Rebou�as Costa";
	size_t pos=nome.find("Rebou�as");
	nome.replace(pos,8,"Costa");
	
	cout << nome <<endl;
}
