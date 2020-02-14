#include <iostream>
#include<iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
    double raio =0;
    cin>>raio;
    
    raio=pow(raio,2)*3.14159;
    cout<<fixed<<setprecision(4)<<"A="<<raio<<endl;
 
 
    return 0;
}
