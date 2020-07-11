#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    double soma = 1.0;
    for(double i=3, j=2 ; i<=39 ; i += 2, j *= 2) {
        soma += (i/j);
    }

    printf("%.2lf\n", soma);
    return 0;
}