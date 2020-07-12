#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main() {

    vector<double> nota;

    while(nota.size() < 2) {
        double x;
        cin >> x;
        if(x >= 0 && x <= 10) {
            nota.push_back(x);
        } else {
            cout << "nota invalida\n";
        }
    }

    printf("media = %.2lf\n", (nota[0]+nota[1])/2);
    return 0;
}