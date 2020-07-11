#include <iostream>
#include<cstdio>
// #include<vector>
using namespace std;
int main(){
    
    double matriz[12][12];

    int linha;
    char op;
    cin >> linha >> op;

    for(int i=0 ; i<12 ; i++) {
        for(int j=0 ; j<12 ; j++) {
            cin >> matriz[i][j];
        }
    }

    double soma = 0;
    for(int i=0 ; i<12 ; i++) {
        soma += matriz[linha][i];
    }

    if(op == 'S') printf("%.1lf\n", soma);
    else if(op =='M') printf("%.1lf\n", soma/12);
    return 0;
}