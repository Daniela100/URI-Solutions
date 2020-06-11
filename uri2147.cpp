#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {

    string palavra;

    int n;
    cin >> n;

    for(int i=0 ; i<n ; i++) {
        cin >> palavra;

        printf("%.2f\n", 0.01*palavra.size());
    }
    
    return 0;
}