#include<iostream>

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

    for(int i=begin+1 ; i<end ; i++) {
        if(i%5 == 2 || i%5 == 3) cout << i << endl;
    }

    return 0;
}