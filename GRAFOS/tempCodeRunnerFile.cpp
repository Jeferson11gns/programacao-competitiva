#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

typedef struct{
    int vertice1, vertice2;
    int peso;//geralmente usase o w para representar o peso
}t_aresta;

vector <t_aresta> aresta;

bool compara(t_aresta a, t_aresta b){
    return a.peso < b.peso;
}

int pai[100000];
int peso[10000];

int find(int x){
    if(pai[x] == x) return x;

    return pai[x] = find(pai[x]);
}

void join(int x, int y){
    x = find(x);
    y = find(y);

    if(x == y) return;

    if(peso[x] > peso[y])
        pai[y] = x;
    else if(peso[y] > peso[x])
        pai[x] = y;
    else{
        pai[x] = y;
        pai[y]++;
    }

}

int main(){

    int n, m, i;
    cin >> n >> m;

    for(i = 0; i < n; i++){
        int u, v, w;
        cin >> u >> v >> w;
        t_aresta aresta;
        aresta.vertice1 = v;
        aresta.vertice2 = u;
        aresta.peso = w;

        pai[i] = i;
        peso[i] = 0;
    }
    
    sort(aresta.begin(), aresta.end(), compara);
    int soma = 0;

    for(i = 0; i < aresta.size(); i++){
        if(find(aresta[i].vertice1) != find(aresta[i].vertice2)){
            soma += aresta[i].peso;
            join(aresta[i].vertice1, aresta[i].vertice2);
        }
    }

    cout << soma << endl;
    return 0;
}