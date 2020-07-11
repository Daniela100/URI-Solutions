#include <iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
    double t;
    cin >> t;
    vector<double> resp;
    resp.push_back(t);
    for(int i=1 ; i<100 ; i++) {
        resp.push_back(resp[i-1]/2);
    }

    for(int i=0 ; i<100 ; i++) {
        printf("N[%d] = %.4lf\n", i, resp[i]);
    }
    return 0;
}