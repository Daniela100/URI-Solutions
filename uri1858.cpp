#include <iostream>

using namespace std;

int main() {
    
    int n;

    cin >> n;
    int min = 20, t, algoz;

    for(int i=1 ; i<=n ; i++) {
        cin >> t;
        if(t < min) {
            algoz = i;
            min = t;
        }
    }

    cout << algoz << endl;

    return 0;
}