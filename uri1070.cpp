#include<iostream>
using namespace std;

int main() {

    int x;
    cin >> x;
    if(x%2 == 0) x++;
    for(int i=x, j=0 ; j<6 ; i+=2, j++) {
        cout << i << endl;
    }
    return 0;
}