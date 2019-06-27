#include <stdio.h>

int n, m, cont = 1;
int visitado[1000][1000];
int toca[1000][1000];

void dfs(int i, int j){
    visitado[i][j] = 1;
    int vi,vj;
    
    vi = i+1;
    vj = j;
    
    if(toca[i][j] == 2) return;

    if(vi >= 0 && vi < n && vj >= 0 && vj < m){
        if(visitado[vi][vj] == 0 && toca[vi][vj] != 0){
            cont++;
            dfs(vi,vj);
        }
    }


    vi = i;
    vj = j+1;
    if(vi >= 0 && vi < n && vj >= 0 && vj < m){
        if(visitado[vi][vj] == 0 && toca[vi][vj] != 0){
            cont ++;
            dfs(vi,vj);
        }
    }



    vi = i;
    vj = j-1;
    if(vi >= 0 && vi < n && vj >= 0 && vj < m){
        if(visitado[vi][vj] == 0 && toca[vi][vj] != 0){
            cont ++;
            dfs(vi,vj);
        }
    }
    
    
    vi = i-1;
    vj = j;
    if(vi >= 0 && vi < n && vj >= 0 && vj < m){
        if(visitado[vi][vj] == 0 && toca[vi][vj] != 0){
            cont++;
            dfs(vi,vj);
        }
    }
    


}

int main(){

    int i, j, emi, lia;
    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            scanf("%d", &toca[i][j]);
            if(toca[i][j] == 3){
                emi = i;
                lia = j;
            }
        }  
    }

    dfs(emi,lia);

    printf("%d", cont);

    return 0;
}