#include<iostream>
#include<cstdio>

using namespace std;
int main() {

    for(int i=1, j=7, aux = 7, cont = 1 ; i<=9 ; cont++, j--) {
        printf("I=%d J=%d\n", i, j);
        if(cont == 3) {
            j = aux + 2 + 1;
            aux += 2;
            cont = 0;
            i += 2;
        }
    }    

    return 0;
}