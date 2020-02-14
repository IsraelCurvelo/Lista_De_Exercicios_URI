#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
 
int main() {
int i; 
double numero;


cout.precision(1);

for(i = 0; i < 100; i++) {
cin >> numero;
if(numero <= 10)
cout << "A["<< i <<"] = " << fixed << numero << endl;
}
return 0;
}

