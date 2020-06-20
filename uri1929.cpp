#include <iostream>
#include <cmath>

using namespace std;

bool avalia(int a, int b, int c) {
    bool tri = false;

    if(abs(b-c) < a && a < b+c) tri = true;
    else tri = false;
    if(abs(a-c) < b && b < a+c && tri) tri = true;
    else tri = false;
    if(abs(a-b) < c && c < a+b && tri) tri = true;
    else tri = false;

    return tri;
}

int main() {

    
    int v[4];
    for(int i=0 ; i<4 ; i++) {
        cin >> v[i];
    }
    
    int a, b, c;
    a = v[0]; b = v[1]; c = v[2];
    
    if(avalia(a, b, c)) cout << "S";
    else {
        c = v[3];
        if(avalia(a, b, c)) cout << "S";
        else {
            b = v[2];
            if(avalia(a, b, c)) cout << "S";
            else {
                a = v[1];
                if(avalia(a, b, c)) cout << "S";
                else cout << "N";
            }
        }
    }

    cout << endl;
}