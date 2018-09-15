#include <bits/stdc++.h>

float Distancia(int x1, int x2, int y1, int y2){

  return (sqrt( (pow((x1 - x2), 2)) + (pow((y1 - y2), 2)) ));
}

int main(void){

  int R1, X1, Y1, R2, X2, Y2;
  while( (scanf("%d %d %d %d %d %d",&R1, &X1, &Y1, &R2, &X2, &Y2) ) != EOF){

    float d1, d2, d3, d4;
    d1 = Distancia(X1, X2+R2, Y1, Y2);
    d2 = Distancia(X1, X2-R2, Y1, Y2);
    d3 = Distancia(X1, X2, Y1, Y2+R2);
    d4 = Distancia(X1, X2, Y1, Y2-R2);

    if(d1 > R1 || d2 > R1 || d3 > R1 || d4 > R1){

      printf("MORTO\n");
    }
    else printf("RICO\n");

  }
  return 0;
}
