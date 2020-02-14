#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int N,cont,a;
	cin>>N;
	
	for(cont =1 ;cont<=10; cont++){
		a=cont*N;
		
		cout<<cont<<" x "<<N<<" = "<<a<<"\n";
	}
	return 0;
}
