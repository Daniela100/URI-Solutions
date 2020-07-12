#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int x = 1;

    for(int i=0 ; i<n ; i++, x++) {
        cout << x << " " << x*x << " " << x*x*x << endl;
    }
    
    return 0;
}