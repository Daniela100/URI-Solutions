#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int ant, rpm;

    cin >> ant;

    for(int i=2 ; i<=n ; i++) {
        cin >> rpm;

        if(ant > rpm) {
            cout << i << endl;
            return 0;
        }

        ant = rpm;
    }

    cout << 0 << endl;

    return 0;
}