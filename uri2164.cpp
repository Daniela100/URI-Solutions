#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    double n;

    cin >> n;

    double a, b;

    a = pow((1.0+sqrt(5.0))/2.0, n);
    b = pow((1.0-sqrt(5.0))/2.0, n);

    printf("%.1f\n", (a-b)/sqrt(5.0));

    return 0;
}