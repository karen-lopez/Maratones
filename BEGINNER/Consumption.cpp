#include <bits/stdc++.h>


using namespace std;


int main(void){

	double A,B,consumo;
	
	while(scanf("%lf %lf",&A, &B) != EOF){

		consumo= A/B;
		
		printf("%.3lf km/l\n",consumo); 
	}
}
    
