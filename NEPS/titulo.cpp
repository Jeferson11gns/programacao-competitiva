#include <iostream>
#include <stdio.h>

using namespace std;

string title(string F){
    int i, j;
    for(i = 0; i < F.size(); i++){
       
        if(F[i] >= 'A' && F[i] <= 'Z' && i != 0 && F[i] != ' '){
            if(F[i-1] == ' '){
            }else F[i] = F[i] - 'A' + 'a';
        }
        
        if(F[0] >= 'a' && F[0] <= 'z'){
            F[i] = F[i] - 'a' + 'A';   
        }

        if(F[i] == ' '){
          
            if(F[i+1] >= 'a' && F[i+1] <= 'z')   F[i+1] = F[i+1] - 'a' + 'A';
          
        }
        
    }

    return F;
}

int main(){ 
    string F;

    //serve para pegar string com espaco(frase)
    getline(cin, F);

    cout << title(F) << "\n";
}