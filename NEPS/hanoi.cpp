#include <iostream>
#include <stdio.h>

using namespace std;

int hanoi(int n, int ori, int dest, int temp){
    

    if(n == 1) return 1;
    
    //essa é a solucao que achei, mas no site esta dando tempo limete
    //return 1 + hanoi(n-1, ori, temp, dest) +  hanoi(n-1, temp, dest, ori); 
    

    //simplifiquei para isso, para poder passar no tempo necessario
    return 1 + (hanoi(n-1, ori, temp, dest)*2); 

}

int main(){

    int i = 1, n;
    
    cin >> n;
    while(n != 0){
        
        int res = hanoi(n, 1, 3, 2);
        
        cout << "Teste " << i << endl;
        cout << res << endl;
       
        cin >> n;

        i++;
    }

    return 0;
}