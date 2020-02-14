#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

int main(int argc, char** argv) {
double x1,x2,y1,y2;

cout << fixed << setprecision(4);

cin>>x1>>y1;
cin>>x2>>y2;

cout << sqrt(pow(x2-x1,2)+pow(y2-y1,2)) << "\n";
	
	return 0;
}
