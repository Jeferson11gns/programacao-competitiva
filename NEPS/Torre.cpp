#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n, i, j, linha = 0, coluna = 0, total , controle = 0;

    scanf("%d", &n);
    int tab[n][n];

    for(i = 0; i < n; i++){
         for(j = 0; j < n; j++){
            scanf("%d", &tab[i][j]);
        }
    }


    int aux_linha[n], aux_coluna[n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            //linhas
            linha += tab[i][j];
            //coluna
            coluna += tab[j][i];
           
        }

        aux_linha[i] = linha;
        aux_coluna[i] = coluna;

        linha = 0;
        coluna = 0;

    }    

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            total = aux_linha[i] + aux_coluna[j] - (tab[i][j]*2);
            
            if(total > controle) controle = total;     
        }
    }


    printf("%d\n", controle);

    return 0;
}