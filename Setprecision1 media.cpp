#include <iostream>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	
	
	double A, B,C;

 cin >> fixed >> setprecision(1);

 cin >> A >> B>>C;

double media;

cout << fixed << setprecision(5);

media = (A*2 + B*3+ C*5)/10;

cout << "MEDIA = " << setprecision(1)<< media << "\n";


	
	
	return 0;
}
