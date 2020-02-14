#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   	double A, B;

 cin >> fixed >> setprecision(1);

 cin >> A >> B;

double media;

cout << fixed << setprecision(5);

media = (A*3.5 + B*7.5)/11;

cout << "MEDIA = " << setprecision(5)<< media << "\n";
 
    return 0;
}
