#include <iostream>
#include <cstdio>

using namespace std;

const double PI = 3.14;

int main(){

    double v, r, h, d, a;
    
    while(cin >> v >> d) {
        r = d/2.0;

        h = v/(PI*r*r);
        a = PI*r*r;

        printf("ALTURA = %.2f\n", h);
        printf("AREA = %.2f\n", a);
    }

    return 0;
}
