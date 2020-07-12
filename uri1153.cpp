#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int fat = n;

    for(int i=n-1 ; i>=1 ; i--) {
        fat *= i;
    }

    cout << fat << endl;
    return 0;
}