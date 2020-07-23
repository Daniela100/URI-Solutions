#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main() {

    vector<int> num;
    int n;
    for(int i=0 ; i<5 ; i++) {
        cin >> n;
        num.push_back(n);
    }

    int par, impar, pos, neg;
    par = impar = pos = neg = 0;

    for(int i=0 ; i<5 ; i++) {
        if(num[i]%2 == 0) par++;
        else impar++;
        if(num[i] > 0) pos++;
        else if(num[i] < 0) neg++;
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, pos, neg);
    return 0;
}