#include <iostream>
#include <string>

using namespace std;

int main(){

    string num;
    cin >> num;

    for(int i=num.length()-1 ; i>=0 ; i--) {
        cout << num[i];
    }

    cout << endl;

    return 0;
}