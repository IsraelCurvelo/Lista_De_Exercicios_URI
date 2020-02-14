#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int N,X,cont,c,d;
	c=0;d=0;
	
	cin>>N;
	
for (cont =1;cont<= N;cont++){
	cin>>X;
	
	if(X>=10 and X<=20 ){
		c=c+1;
	}
	else{
		d=d+1;
	}
}
	
	cout<<c<<" in\n";
	cout<<d<<" out\n";
	
	
	
	return 0;
}
