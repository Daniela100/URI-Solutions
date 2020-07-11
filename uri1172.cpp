#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    int x[10];
    int num;
    for(int i=0 ; i<10 ; i++) {
        cin >> num;
        if(num <= 0) num = 1;
        x[i] = num;
    }

    for(int i=0 ; i<10 ; i++){
        printf("X[%d] = %d\n", i, x[i]);
    }
    return 0;
}