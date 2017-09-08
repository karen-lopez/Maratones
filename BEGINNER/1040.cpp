#include <bits/stdc++.h>


int main(void){

	double N1, N2, N3, N4;

	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

	N1 = N1*(0.20);
	N2 = N2*(0.30);
	N3 = N3*(0.40);
	N4 = N4*(0.10);

	double Promedio = N1 + N2 + N3 + N4;
	printf("Media: %f", Promedio);

	return 0;

}
