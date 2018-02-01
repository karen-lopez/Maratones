#include <bits/stdc++.h>


using namespace std;

int main(void)
{	
	string nombre;
	while(cin>>nombre){	
		double salario, ventas;
		cin>>salario>>ventas;
		salario = salario + (ventas*0.15);
		printf("TOTAL = R$ %.2lf\n",salario);
	}
	return 0;
}
