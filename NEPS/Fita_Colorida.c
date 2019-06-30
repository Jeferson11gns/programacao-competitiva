#include <stdio.h>

int main(){

	int n, k, i, j, dir = 0, esq = 0;
	
	scanf("%d", &n);
	int fita[n];
	int aux[n];
	
	for(i = 0; i < n; i++) scanf("%d", &fita[i]);

	for(i = 0; i < n; i++) aux[i] = 100;
	
	for(k = 0; k < n; k++){
		if(fita[k] == 0){
			aux[k] = 0;

			for(i = k+1; i < n; i++){
				dir++;
				if(dir >= 9) dir = 9;
				if(dir < aux[i]) aux[i] = dir;
			}
			dir = 0;

			for(j = k-1; j >= 0; j--){
				esq++;
				if(esq >= 9) esq = 9;
				if(esq < aux[j]) aux[j] = esq;
			}
			esq = 0;
		}

	}

	
	for(i = 0; i < n; i++) printf("%d ", aux[i]);

	return 0;
}
