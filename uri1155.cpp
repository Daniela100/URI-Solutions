#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    float soma = 0.0;
    for(float i=1 ; i<=100 ; i++) {
        soma += (1/i);
    }

    printf("%.2f\n", soma);
    return 0;
}