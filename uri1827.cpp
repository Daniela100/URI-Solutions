#include <iostream>

using namespace std;

int main() {

    int n;

    while (cin >> n) {
        for(int i=0 ; i<n ; i++) {
            for(int j=0 ; j<n ; j++) {
                if(i == j && j == n-i-1) cout << 4;
                else if(i == j && ( i <= n/3-1 || i >= n-n/3)) cout << 2;
                else if(j == n-i-1 && (j >= n-n/3 || i >= n-n/3)) cout << 3;
                else if(j>=n/3 && j<n-n/3 && i>=n/3 && i<n-n/3) cout << 1;
                else cout << 0;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}