#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){

    int n, i, cont = 0;
    cin >> n;
    
    int v[n];
    int aux[n];

    for(i = 0; i < n; i++) cin >> v[i];
    
    for(i = 0; i < n; i++) aux[i] = v[i];

    sort(v, v+n);

    
    for(i = 0; i < n; i++){
        if(aux[i] != v[i]){
            aux[cont] = v[i];
            cont++;
        }
    }

    sort(aux, aux+cont);
    
    printf("%d\n", cont);

    if(cont != 0)
        for(i = 0; i < cont; i++) cout << aux[i] << " ";


    return 0;
}