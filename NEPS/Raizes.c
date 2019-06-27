#include <stdio.h>
#include <math.h>

int main(){

	int n, i;
	float res;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%f", &res);
		printf("%.4f\n", sqrt(res));
	}

	return 0;
}
