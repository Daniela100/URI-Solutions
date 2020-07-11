#include <iostream>
#include<cstdio>
// #include<vector>
using namespace std;
int main(){
    
    double matriz[12][12];

    int cont=0;
    char op;
    cin >> op;
    double soma = 0;


    for(int i=0 ; i<12 ; i++) {
        for(int j=0 ; j<12 ; j++) {
            cin >> matriz[i][j];
            if(j>i) {
                soma += matriz[i][j];
                cont++;
            }
        }
    }

    if(op == 'S') printf("%.1lf\n", soma);
    else if(op =='M') printf("%.1lf\n", soma/cont);
    return 0;
}