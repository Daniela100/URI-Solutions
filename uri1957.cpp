#include <iostream>

using namespace std;

void hexadecimal(long long n) {
    if(n/16 == 0) {
        long long resto = n%16;
        if(resto > 9) {
            resto += 55;
            cout << (char)resto;
        } else {
            cout << resto;
        }
        return;
    }

    hexadecimal(n/16);
    long long resto = n%16;
    if(resto > 9) {
        resto += 55;
        cout << (char)resto;
    } else {
        cout << resto;
    }

    return;
}
 
int main(){

    long long n;

    cin >> n;

    hexadecimal(n);
    cout << endl;
    return 0;
}