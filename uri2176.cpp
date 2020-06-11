#include <iostream>
#include <string>
using namespace std;

int main() {
    string msg;

    cin >> msg;
    int cont = 0;
    for(int i=0 ; i<msg.size() ; i++) {
        if(msg[i] == '1') cont++;
    }
    
    cout << msg;
    if(cont%2 == 0) cout << 0;
    else cout << 1;

    cout << endl;
    return 0;
}