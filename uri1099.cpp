#include<iostream>

using namespace std;

int main() {

    int x, y, n;
    cin >> n;

    int begin, end;
    for(int i=0 ; i<n ; i++) {
        cin >> x >> y;
        if(x >= y) {
            begin = y;
            end = x;
        } else {
            begin = x;
            end = y;
        }

        int soma = 0;
        for(int i=begin+1 ; i<end ; i++) {
            if(i%2 != 0) {
                soma+=i;
            }
        }

        cout << soma << endl;
    }
    
    return 0;
}