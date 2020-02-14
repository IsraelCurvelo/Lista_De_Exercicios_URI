#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int inicio, final , duracao;
	cin>>inicio>>final;
	
	
	if(inicio >=final ){
		duracao = 24 - inicio + final ;
	}
	 if (inicio<final ){
	 	duracao = final - inicio;
	 }
	 
		
		
		
		
		cout<<"O JOGO DUROU "<< duracao <<" HORA(S)\n";
		
	return 0;
}
