#include <bits/stdc++.h>

using namespace std;

int main(void){
	
	double litros;
	int horas,velocidad, distancia;
	
	while(scanf("%d %d",&horas, &velocidad) != EOF){
		
		distancia= velocidad * horas;
		litros =distancia/12.0;
		
		printf("%.3lf\n", litros);
	}
}

