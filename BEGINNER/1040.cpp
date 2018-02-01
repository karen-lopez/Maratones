#include <bits/stdc++.h>


int main(void){

	double N1, N2, N3, N4, N5;

	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

	N1 = N1*(0.20);
	N2 = N2*(0.30);
	N3 = N3*(0.40);
	N4 = N4*(0.10);

	float Promedio = N1 + N2 + N3 + N4;
	printf("Media: %.1f\n", Promedio);
	if(Promedio >= 7.0) printf("Aluno aprovado.\n");
	if(Promedio < 5.0) printf("Aluno reprovado.\n");
	if(Promedio >= 5.0 && Promedio < 7.0){
		printf("Aluno em exame.\n");
		scanf("%lf", &N5);
		printf("Nota do exame: %.1lf\n", N5);
		Promedio = (Promedio + N5) / 2;
		if(Promedio >= 5.0) printf("Aluno aprovado.\n");
		if(Promedio < 5.0) printf("Aluno reprovado.\n");
		printf("Media final: %.1f\n", Promedio);
	}

	return 0;

}
