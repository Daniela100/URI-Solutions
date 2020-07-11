#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    
    for(int i=0 ; i<t ; i++) {
        cin >> n;
        bool primo = true;
        for(int i=2 ; i<=(n/2) ; i++) {
            if(n%i == 0) {
                primo = false;
                break;
            }
        }

        if(primo) {
            printf("%d eh primo\n", n);
        } else {
            printf("%d nao eh primo\n", n);
        }
    }
    return 0;
}