#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a, b = 0, c = 1;
    for(int i=0; i<n; i++){
        if(i < 1){
            a = 0;
        }else if(i == 1){
            a = 1;
        }else{
            a = b + c;
            b = c;
            c = a;
        }

        cout << a << (i == (n-1)?"\n":" ");
    }
    return 0;
}