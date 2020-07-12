#include<iostream>
#include<cstdio>

using namespace std;
int main() {

    int n;
    cin >> n;

    for(int i=0 ; i<n ; i++) {
        double a, b, c;
        cin >> a >> b >> c;
        double soma = a*2 + b*3 + c*5;
        printf("%.1lf\n", soma/10);
    }
    
    return 0;
}