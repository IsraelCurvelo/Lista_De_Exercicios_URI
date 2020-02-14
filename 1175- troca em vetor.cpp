#include <stdio.h>
#include<iostream>

using namespace std;
int main()
{
   int vetora[20], aux,i,j;
   
    for(i=0; i<20; i++){
	cin>>vetora[i];
    	
	}
        
    for(i=0, j=19; i<10; i++, j--)
    {
        aux=vetora[i];
        vetora[i]=vetora[j];
        vetora[j]=aux;
    }
    for(i=0; i<20; i++){
    	cout<<"N["<<i<<"] = "<<vetora[i]<<endl;
	}
       
    return 0;
}
