#include <bits/stdc++.h>

int main(void){

  int N1, N2, N3;

  scanf("%d %d %d", &N1, &N2, &N3);

  if(N1 < N2 && N1 < N3){
    printf("%d\n", N1);
    if(N2 < N3){
      printf("%d\n%d\n\n",N2, N3);
    }else printf("%d\n%d\n\n",N3, N2);
  }
  if(N2 < N1 && N2 < N3){
    printf("%d\n", N2);
    if(N1 < N3){
      printf("%d\n%d\n\n",N1, N3);
    }else printf("%d\n%d\n\n",N3, N1);
  }
  if(N3 < N2 && N3 < N1){
    printf("%d\n", N3);
    if(N2 < N1){
      printf("%d\n%d\n\n",N2, N1);
    }else printf("%d\n%d\n\n",N1, N2);
  }
  printf("%d\n%d\n%d\n", N1, N2, N3);

  return 0;
}
