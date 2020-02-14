#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
	
double hora , velocidade, total;
	cin>>hora>>velocidade;
	
	cout<<fixed<<setprecision(6);
	
	total = (velocidade / 12 )* hora;
	
	cout<<setprecision (3)<<total <<"\n";
	
	
	return 0;
}
