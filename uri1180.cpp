#include <iostream>
#include<cstdio>
// #include<vector>
using namespace std;
int main(){
    
    int n;
    cin >> n;

    int x;
    cin >> x;
    int pmenor = 0, menor = x;

    for(int i=1 ; i<n ; i++) {
        cin >> x;
        if(x < menor) {
            pmenor = i;
            menor = x;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pmenor << endl;
    return 0;
}