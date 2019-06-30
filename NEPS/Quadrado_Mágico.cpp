#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n, i, j, colun = 0,linhas = 0, diag = 0, cont_l, cont_c, cont_d = 0;

    scanf("%d", &n);
    
    int quadrado[n][n];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++) scanf("%d", &quadrado[i][j]);

    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            
            //soma das linhas
            linhas += quadrado[i][j];
            //soma colunas
            colun += quadrado[j][i];
            //diagonal 1
            if(i == j) diag += quadrado[i][j];
            //diagonal 2
            if((i+j) == n-1) cont_d += quadrado[i][j];

        }
        if(cont_l != linhas && i != 0) break;
        cont_l = linhas;
        linhas = 0;
        

        if(cont_c != colun && i != 0) break;
        cont_c = colun;
        colun = 0;

    }
   
    if(diag != cont_d) diag = -1;  
    
    
    if(cont_l == cont_c && cont_c == diag) printf("%d", cont_c);
    else printf("-1");

    return 0;
}