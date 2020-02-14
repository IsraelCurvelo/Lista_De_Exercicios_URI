#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
 	int A,B;
	double C,D;
	
	cin>>A>>B;
	cin >> fixed >> setprecision(2);
	cin>>C;
	cout << fixed << setprecision(2);
	D= B*C;
	
	cout<<"NUMBER = "<<A<<"\n";
	
	cout<<"SALARY = U$ "<< setprecision(2)<<D<<"\n";
 
    return 0;
}
