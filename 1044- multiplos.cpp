#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	int A,B,c;
	
	cin>>A>>B;
	

	
	if((A % B == 0) | (B % A == 0)){
		cout<<"Sao Multiplos\n";
	}
	 else{
	 	cout<<"Nao sao Multiplos\n";
	 }
	return 0;
}
