#include <stdio.h>

int pai[100100];
int peso[100100];
int pontos[100100];


//procura
int find(int x){
    if(pai[x] == x) return x;
    
    return pai[x] = find(pai[x]);

}
//junta
void join(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b) return;

    if(peso[a] > peso[b]){
        pai[b] = a;
        pontos[a] += pontos[b];
    }else if(peso[b] > peso[a]){
        pai[a] = b;
        pontos[b] += pontos[a];
    }else{
        pai[a] = b;
        peso[b]++;
        pontos[b] += pontos[a];
    }

}


int main(){

    int n;
    int m;
    int q, a, b;
    int cont = 0;//vitoria

    while (1){
        cont = 0;
    
        scanf("%d %d", &n, &m); 
        if(n == 0 && m == 0) break;

        for(int i = 1; i <= n; i++){
            pai[i] = i;
            peso[i] = 0;
            scanf("%d", &pontos[i]);
        }

        for(int i = 1; i <= m; i++){
            scanf("%d %d %d",&q, &a, &b);

            if(q == 1){
                join(a, b);
            }else if(q == 2){
                a = find(a);
                b = find(b);
                int rafa = find(1); 
                
                if(a == rafa){

                    if(pontos[a] > pontos[b]) cont++;

                }else if(b == rafa){

                    if(pontos[b] > pontos[a]) cont++;

                }


            }
        }

        printf("%d\n", cont);
    }


    return 0;
}