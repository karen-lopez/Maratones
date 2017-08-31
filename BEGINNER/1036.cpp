#include <bits/stdc++.h>

using namespace std;

int main(void){

  double A, B, C;
  scanf("%lf %lf %lf", &A, &B, &C);

  double aux1 = pow(B, 2) - (4*A*C);
  if(aux1 < 0 || (2*A) == 0 ){
    printf("Impossivel calcular\n");
    return 0;
  }
  double x1 = ((-1 * B) + sqrt(aux1)) / (2*A);
  double x2 = (- B - sqrt(pow(B, 2) - (4*A*C))) / (2*A);

  printf("R1 = %.5lf\nR2 = %.5lf", x1, x2);

  return 0;
}
