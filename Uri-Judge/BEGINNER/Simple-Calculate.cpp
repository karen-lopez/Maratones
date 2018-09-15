#include <bits/stdc++.h>

using namespace std;

int main(void){

	int num;
	double productos, precio,precio2;

	while(scanf("%d %lf %lf",&num, &productos, &precio) != EOF){
    	
		precio = productos * precio;
		cin>>num>>productos>>precio2;
		precio = precio + (productos * precio2);

    		printf("VALOR A PAGAR: R$ %.2lf\n",precio);
	}
}
    
    
