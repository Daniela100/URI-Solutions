#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    int x;
    do {
        cin >> x;
        if(x != 0) {
            if(x%2 != 0) x++;
            int soma = 0;
            for(int cont=0 ; cont < 5 ; x+=2, cont++) {
                soma += x;
            }
            cout << soma << endl;
        }
    } while(x != 0);
    return 0;
}