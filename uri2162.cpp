#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int n;
    cin >> n;

    int h[n];

    for(int i=0 ; i < n ; i++) {
        cin >> h[i];    
    }

    bool pico = false, vale = false;
    if(n == 2) {
        if(h[1] == h[0]) {
            cout << 0 << endl;
            return 0;
        }
    }

    for(int i=0 ; i<n-2 && n > 2 ; i++) {
        if(h[i] > h[i+1]) {
            vale = true;
        } else if(h[i] < h[i+1]) {
            pico = true;
        } else {
            cout << 0 << endl;
            return 0;
        }

        if(vale) {
            if(h[i+1] >= h[i+2]) {
                cout << 0 << endl;
                return 0;
            }
        }

        if(pico) {
            if(h[i+1] <= h[i+2]) {
                cout << 0 << endl;
                return 0;
            }
        }

        vale = pico = false;
    }

    cout << 1 << endl;

    return 0;
}