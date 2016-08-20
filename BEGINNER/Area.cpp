#include <bits/stdc++.h>


using namespace std;


int main(void){

	double R,T,CI,P,Q,A,B,C;
	double pi=3.14159;
	while(scanf("%lf %lf %lf",&A, &B, &C) != EOF){

		T =(A*C)/2;
    		CI =pi*pow(C,2);
		P =((A+B)*C)/2;
		Q =B*B;
		R =A*B;
		
		printf("TRIANGULO: %.3lf\n",T);
		printf("CIRCULO: %.3lf\n",CI); 
		printf("TRAPEZIO: %.3lf\n",P); 
		printf("QUADRADO: %.3lf\n",Q); 
		printf("RETANGULO: %.3lf\n",R); 
	}
}
    
