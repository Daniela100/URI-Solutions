#include <iostream>
 
using namespace std;
 
int main() {
 
    int num[6];
    
    for(int i=0 ; i<6 ; i++) {
        cin >> num[i];
    }
    
    int cont = 0;
    for(int i=0 ; i<6 ; i++) {
        if(num[i] > 0) cont++;
    }
    
    cout << cont << " valores positivos\n";
 
    return 0;
}