#include <bits/stdc++.h>


using namespace std;


int main(void){

    double horas, salario;
    int numero;
    

    while(scanf("%d %lf %lf",&numero, &horas,&salario) != EOF){
    	
		salario =horas * salario;
    	cout<<"NUMBER = "<<numero<<endl;
    	printf("SALARY = U$ %.2lf\n",salario);
    }
}
    
