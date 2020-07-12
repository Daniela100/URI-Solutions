#include<iostream>
using namespace std;

int main() {
    int x;
    do {
        cin >> x;
        for(int i=1 ; i<=x ; i++) {
            cout << i << (i == x?"\n":" ");
        }
    } while(x!=0);
    return 0;
}