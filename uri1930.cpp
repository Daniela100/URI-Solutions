#include <iostream>

using namespace std;
 
int main(){

    int t, soma = 0;
    
    for(int i=1 ; i<=4 ; i++) {
        cin >> t;
        if(i == 4) soma += t;
        else soma += (t-1);
    }

    cout << soma << endl;
	
    return 0;
}