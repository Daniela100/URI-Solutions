#include<iostream>

using namespace std;

int main() {

    int x, y;

    while(true) {
        cin >> x >> y;
        if(x == 0 || y == 0) break;
        else if(x > 0) {
            if(y>0) cout << "primeiro\n";
            else cout << "quarto\n";
        } else {
            if(y>0) cout << "segundo\n";
            else cout << "terceiro\n";
        }
    }
    
    return 0;
}