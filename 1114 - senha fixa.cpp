#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a;
	
	cin>>a;
	
	while ( a!= 2002){
		cout<<"Senha Invalida\n";
		cin>>a;
	}
	cout<<"Acesso Permitido\n";
	return 0;
}
