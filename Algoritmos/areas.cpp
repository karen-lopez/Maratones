#include <bits/stdc++.h>


using namespace std;

double areaCirculo(double R){

  double A;
  double pi=3.14159;
  A =pi* (R*R);
  printf("A=%.4lf\n",A);
  return A;
}

int main(void){

    double R;
    while(scanf("%lf",&R) != EOF){
      double Area = areaCirculo(R);
      cout<<"A="<<fixed<<setprecision(4)<<Area<<endl;
    }

    return 0;
}
