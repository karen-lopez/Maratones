#include <bits/stdc++.h>


using namespace std;


int main(void){

	string nombre;
	double ventas, salario;
    
	while(cin>>nombre != EOF){
    	
		salario = salario + (ventas*0.15);
    		printf("TOTAL = R$ %.2lf\n",salario);
	}
}
    
