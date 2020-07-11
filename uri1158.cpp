#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1 ; i<=n ; i++) {
        int x, y;
        cin >> x >> y;

        if(x%2 == 0) x++;
        int soma = 0;
        for(int i=x, cont=0 ; cont<y ; cont++, i+=2) {
            soma += i;
        }

        cout << soma << endl;
    }
    return 0;
}