#include<iostream>
#include<cstdio>
using namespace std;

int main() {

    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++) {
        float x, y;
        cin >> x >> y;
        if(y == 0) {
            cout << "divisao impossivel\n";
        } else {
            printf("%.1f\n", x/y);
        }
    }
    
    return 0;
}