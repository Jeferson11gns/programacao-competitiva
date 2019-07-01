#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n, i, j, k = 0, linha = 0, coluna = 0, total , controle = 0, ciclo = 0;

    scanf("%d", &n);
    int tab[n][n];

    for(i = 0; i < n; i++){
         for(j = 0; j < n; j++){
            scanf("%d", &tab[i][j]);
        }
    }
   
    while(k < n){
        
        
        for(i = 0; i < n; i++){
            //linhas
            linha += tab[k][i];
            //coluna
            coluna += tab[i][ciclo];

        }
        total = linha + coluna - (tab[k][ciclo]*2);
            
        if(total > controle) controle = total;
       
        
        if(ciclo < n-1) ciclo++;
        else{
            ciclo = 0;
            k++;
        }

            
        linha = 0;
        coluna = 0;

    }    


    printf("%d\n", controle);

    return 0;
}