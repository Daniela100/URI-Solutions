#include <iostream>
// #include <string>
#include <iomanip>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=0 ; i<n ; i++) {
        int h, m, e;

        cin >> h >> m >> e;

        cout << setfill('0') << setw(2) << h;
        cout << ":";
        cout << setfill('0') << setw(2) << m;
        cout << " - ";
        if(e == 0) cout << "A porta fechou!\n";
        else cout << "A porta abriu!\n";
    }
    
    return 0;
}