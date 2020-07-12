#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int x = 0;

    for(int i=0 ; i<n ; i++) {
         
        while(true) {
            x++;
            if(x%4 == 0) {
                cout << "PUM\n";
                break;
            } else {
                cout << x << " ";
            }
        }
    }    

    return 0;
}