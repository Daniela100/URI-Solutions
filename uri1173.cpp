#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    int x[10];
    int num;
    cin >> x[0];
    for(int i=1 ; i<10 ; i++) {
        x[i] = 2*x[i-1];
    }

    for(int i=0 ; i<10 ; i++){
        printf("N[%d] = %d\n", i, x[i]);
    }
    return 0;
}