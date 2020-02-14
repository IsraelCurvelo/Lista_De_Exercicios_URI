#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

int main(int argc, char** argv) {
double raio,volume,pi;
pi=3.14159;

cin>>raio;

cout<<fixed<<setprecision(3);
volume =(4/3.0)* pi* pow (raio,3);

cout<<"VOLUME = "<<setprecision(3)<<volume<<"\n";


	
	return 0;
}
