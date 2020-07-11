#include <iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> resp;
    for(int i=0, j=0 ; j<1000 ; i++, j++) {
        resp.push_back(i);
        if(i == t-1) i = -1;
    }

    for(int i=0 ; i<1000 ; i++) {
        printf("N[%d] = %d\n", i, resp[i]);
    }
    return 0;
}