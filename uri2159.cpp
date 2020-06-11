#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {

    double n;
    cin >> n;
    double min, max;

    min = n/log(n);
    max = 1.25506*(n/log(n));
    
    printf("%.1f %.1f\n", min, max);
    return 0;
}