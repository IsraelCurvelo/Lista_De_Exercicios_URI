#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 double A, B,C;

 cin >> fixed >> setprecision(1);

 cin >> A >> B>>C;

double media;

cout << fixed << setprecision(5);

media = (A*2 + B*3+ C*5)/10;

cout << "MEDIA = " << setprecision(1)<< media << "\n";
 
    return 0;
}
