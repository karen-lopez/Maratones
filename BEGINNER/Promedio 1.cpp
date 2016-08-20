#include <bits/stdc++.h>


using namespace std;


int main(void){

    double A,B,promedio;
    double aux=(double)10/11;

    while(scanf("%lf %lf",&A, &B) != EOF){
    	promedio =((A*0.35)+(B*0.75))*aux;
    	printf("MEDIA = %.5lf\n",promedio); 
    }
}
    
