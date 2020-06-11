#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int n;
    cin >> n;

    double resul = 0.0;

    for(int i=1 ; i <= n ; i++) {
        resul += 6.0;
        resul = 1.0/resul;
    }

    resul += 3.0;

    printf("%.10f\n", resul);

    return 0;
}