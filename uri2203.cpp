#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int xf, yf, rcu, rvc;
    int xi, yi, vi;

    while(cin >> xf >> yf >> xi >> yi >> vi >> rcu >> rvc) {
        double di = 1.5*vi;
        di += sqrt(pow((xf-xi)*1.0, 2) + pow(1.0*(yi-yf), 2));

        double du = 1.0*(rcu+rvc);

        if(du < di) cout << "N\n";
        else cout << "Y\n";
    }
    return 0;
}