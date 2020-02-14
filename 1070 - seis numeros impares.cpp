#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char** argv) {
	int X,a,cont;
	cont=1;
	
	cin>>X;
	a=X % 2;
	if (a==0){
		X=X+1;
		cout<<X<<"\n";
		for(cont=1;cont<=5;cont++){
			
			
			X=X+2;
			cout<<X<<"\n";
		}
	}
	
	if (a ==1) {
	for(cont=1;cont<=6;cont++){
		    cout<<X<<"\n";
			X=X+2;
	
		}
		
	}
	return 0;
}
