#include <iostream>

using namespace std;

int main() {

    int t, n, pedidos;

    while(true) {
        cin >> t;
        if(t == 0) break;

        for(int i=0 ; i<t ; i++) {
            cin >> n;

            if(n%2 != 0) {
                pedidos = (n-1)*2 + 1;
            } else {
                pedidos = (n-2)*2 + 2;
            }

            cout << pedidos << endl;
        }
    }
    
    return 0;
}