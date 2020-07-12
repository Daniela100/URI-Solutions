#include<iostream>

using namespace std;

int main() {

    int x, y;
    int begin, end;

    while(true) {
        cin >> x >> y;
        if(x <= 0 || y <= 0 ) break;

        if(x >= y) {
            begin = y;
            end = x;
        } else {
            begin = x;
            end = y;
        }

        int soma = 0;
        for(int i=begin ; i<=end ; i++) {
            cout << i << " ";
            soma += i;
        }

        cout << "Sum=" << soma << endl;
    }
    
    return 0;
}