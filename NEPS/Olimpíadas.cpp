#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

typedef struct{
    int ouro = 0;
    int prata = 0;
    int bronze = 0;
    int pais;
}competidor;

int org_camp(competidor a, competidor b){

    if(a.ouro != b.ouro) return a.ouro > b.ouro;

    if(a.prata != b.prata) return a.prata > b.prata;

    if(a.bronze != b.bronze) return a.bronze > b.bronze;

    return a.pais < b.pais;

}

int main(){
    int m, n, i, o, p, b;
    
    cin >> n >> m;
    
    
    competidor v[n];

    for(i = 0; i < n; i++){
        v[i].pais = i+1;
    }

    for(i = 0; i < m; i++){
       cin >> o >> p >> b;

       v[o-1].ouro += 1;
       v[p-1].prata += 1;
       v[b-1].bronze += 1;
    }

    sort(v, v+n, org_camp);

    for(i = 0; i < n; i++) cout << v[i].pais << " ";
    
    
    return 0;
}