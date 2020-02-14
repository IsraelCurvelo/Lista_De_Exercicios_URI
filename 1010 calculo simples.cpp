#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc, char** argv) {
	int cod1,num1,cod2,num2;
	double valor1,valor2, total;
	
	cin>>cod1>>num1>> fixed >> setprecision(2)>>valor1;
	cin>>cod2>>num2>> fixed >> setprecision(2)>>valor2;	
	
	cout << fixed << setprecision(2);
	
	valor1=num1 * valor1;
	valor2= num2 * valor2;
	total = valor1+ valor2;
	
	cout<<"VALOR A PAGAR: R$ "<<setprecision (2)<<total<<"\n";	
	
	return 0;
}
