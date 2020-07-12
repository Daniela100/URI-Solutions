#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    unsigned long int x = 1;

    for(int i=0 ; i<n ; i++, x++) {
        cout << x << " " << x*x << " " << x*x*x << endl;
        cout << x << " " << x*x+1 << " " << x*x*x+1 << endl;
    }

    return 0;
}