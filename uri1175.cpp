#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    int num[20];
    for(int i=19 ; i>=0 ; i--) cin >> num[i];
    for(int i=0 ; i<20 ; i++) {
        printf("N[%d] = %d\n", i, num[i]);
    }


    return 0;
}