#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    float s;

    cin >> s;

    float per;

    if(s<=400) per = 15;
    else if(s<=800) per = 12;
    else if(s<=1200) per = 10;
    else if(s<=2000) per = 7;
    else per = 4;

    float novo;
    novo = s + ((per*s)/100.0);
    printf("Novo salario: %.2f\n", novo);
    printf("Reajuste ganho: %.2f\n", (per*s)/100.0);
    printf("Em percentual: %.0f %%\n", per);

    return 0;
}