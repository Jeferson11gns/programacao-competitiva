#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

typedef struct{
    int pontos;
    int id;
}carro;



int compara(carro a, carro b){

    if(a.pontos != b.pontos) return a.pontos > b.pontos;


    return a.id < b.id;

}

int main(){
    
    carro pilotos[102];
    int valor[102];
    int posicao[102][102];

    int g, p, s, k, posi;
    cin >> g >> p;
  

    int i, j;
   
    while(g != 0 || p != 0){

        for(i = 1; i <= g; i++){
            for(j = 1; j <= p; j++){
               
                cin >> posi;
                      
                posicao[i][posi] = j;
            }
        }

        cin >> s;

        for(i = 1; i <= s; i++){
            cin >> k;
            
        
            for(j = 1; j <= p; j++){
                pilotos[j].id = j;
                pilotos[j].pontos = 0;
            }



            
            for(j = 1; j <= k; j++){
                cin >> valor[j];
            }    



            for(int m = 1; m <= g; m++){
                for(int n = 1; n <= k; n++){
                    pilotos[posicao[m][n]].pontos += valor[n];
                }
            }




            sort(pilotos+1, pilotos+p+1, compara);

            int maior = pilotos[1].pontos;


            for(int x = 1; (x <= p) && (pilotos[x].pontos == maior); x++){
                if(x > 1) cout << " ";

                cout << pilotos[x].id;

            } 

            cout << "\n";
            
        }


        cin >> g >> p;
    

    }

    
    return 0;
}