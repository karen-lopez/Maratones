#include <bits/stdc++.h>


using namespace std;


int main(void){

	double x1, y1, x2, y2,distancia;
	
	while(scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2) != EOF){

		distancia= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		
		printf("%.4lf\n",distancia); 
	}
}
    
