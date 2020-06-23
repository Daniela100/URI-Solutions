#include <iostream>

using namespace std;

int main() {

    int r;

    while(cin >> r) {
        if(r == 0) {
            cout << "vai ter copa!" << endl;
        } else {
            cout << "vai ter duas!" << endl;
        }
    }

    return 0;
}