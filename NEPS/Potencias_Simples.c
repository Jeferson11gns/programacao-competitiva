#include <stdio.h>
#include <math.h>

int main(){
	
	double x, y;
	scanf("%lf %lf", &x, &y);
	
	double res = pow(x,y);
	
	printf("%.4lf\n", res);

	return 0;
}
