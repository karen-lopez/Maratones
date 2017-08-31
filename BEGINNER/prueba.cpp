#include <bits/stdc++.h>


using namespace std;


int main(void){

    double A = 0.200000, B = 0.10;
    int n = A/B;
    int n1 = int(A/B);
    int n2 = double(A/B);
    int n3 = float(A/B);
    printf("double A = 0.200000, B = 0.10 \n" );
    printf("RESULTADO A/B = %d\n",n);
    printf("RESULTADO int(A/B) = %d\n",n1);
    printf("RESULTADO double(A/B) = %d\n",n2);
    printf("RESULTADO float(A/B) = %d\n",n3);

}
