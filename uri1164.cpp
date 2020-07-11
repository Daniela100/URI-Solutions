#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    
    for(int i=0 ; i<t ; i++) {
        cin >> n;
        int soma = 0;
        for(int i=1 ; i<=(n/2) ; i++) {
            if(n%i == 0) {
                soma += i;
            }
        }

        if(soma == n) {
            printf("%d eh perfeito\n", n);
        } else {
            printf("%d nao eh perfeito\n", n);
        }
    }
    return 0;
}