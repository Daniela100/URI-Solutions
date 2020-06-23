#include <iostream>
// #include<cstdio>
#include<iomanip>
// #include<vector>
#include<cmath>
using namespace std;

void matriz(const int n) {
    
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            if(j == 0) cout << setw(3) << abs(j-i)+1;
            else cout << " " << setw(3) << abs(j-i)+1;
        }
        cout << endl;
    }

    cout << endl;

    return;
}

int main(){
    
    int n;
    cin >> n;
    while(n != 0) {
        matriz(n);
        cin >> n;
    }
    return 0;
}