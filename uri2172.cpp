#include <iostream>

using namespace std;

int main() {

    long long m, x;

    while(cin >> x >> m) {
        if(x == 0 && m == 0)
            break;
        
        cout << x*m << endl;
    }

    return 0;
}