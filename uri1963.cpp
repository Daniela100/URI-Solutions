#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    double a, b;

    cin >> a >> b;
    double result = ((b-a)*100.0)/a;

    printf("%.2f", result);
    cout << "%\n";

    return 0;
}