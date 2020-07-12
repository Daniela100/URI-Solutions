#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    int begin, end;

    if(x <= y) {
        begin = x;
        end = y;
    } else {
        begin = y;
        end = x;
    }

    int soma = 0;
    for(int i=begin ; i<=end ; i++) {
        if(i%13 != 0) soma += i;
    }

    cout << soma << endl;
    return 0;
}