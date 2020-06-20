#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;

    cin >> n;

    for(int i=0 ; i<n ; i++) {
        long long t;
        cin >> t;
        long long ano = 2015 - t;

        if(ano <= 0) {
            cout << (-1*ano) + 1 << " A.C.\n";
        } else {
            cout << ano << " D.C.\n";
        }
    }
    return 0;
}