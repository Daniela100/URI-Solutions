#include <iostream>

using namespace std;

int main() {

    int l;
    int max = 0;

    while(cin >> l) {
        max = 0;
        for(int i=0 ; i<l ; i++) {
            int v;
            cin >> v;
            if(v > max) {
                max = v;
            }
        }

        if(max < 10) {
            cout << 1;
        } else if(max < 20) {
            cout << 2;
        } else {
            cout << 3;
        }

        cout << endl;
    }

    return 0;
}