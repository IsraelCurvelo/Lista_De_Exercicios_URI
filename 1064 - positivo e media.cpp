#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc, char** argv) {
	float v1,v2,v3;
	int cont;
	cont=1;
	
	
	for (cont= 1;cont<= 6;cont++){
		cin>>v1;
		
		if (v1>0){
			v2=v2+1;
			v3=v3+v1;
		}
		
	}
	
	cout<<v2<<" valores positivos\n";
	cout<<fixed<<setprecision (1);
	v3=v3/v2; 
	cout<<setprecision(1)<<v3<<"\n";
	return 0;
}
