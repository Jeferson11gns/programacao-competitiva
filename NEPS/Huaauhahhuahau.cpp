#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int k, controle = 0, i = 0, cont = 1;
    string risada;
    string aux;

    cin >> risada;

    for(k = 0; k < risada.size(); k++){
        if(risada[k] == 'a' || risada[k] == 'e' || risada[k] == 'i' 
            || risada[k] == 'o' || risada[k] == 'u'){
                aux[i] = risada[k];
                i++;
        }
    } 
    
    int tam = i/2;
    
    for(k = 0; k < tam; k++){
        
        if(aux[k] == aux[i-1]) cont = 1;
        else{
            cont = 0;
            break;
        }
        i--;
    } 

    if(cont == 1) printf("S");
    else printf("N");
    

    return 0;
}