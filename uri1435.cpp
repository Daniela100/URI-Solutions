#include <iostream>
// #include<cstdio>
#include<iomanip>
// #include<vector>
using namespace std;

void matriz(const int n) {
    int m[n][n];
    int meio, bot;
        
    meio = ( n%2 == 0 ? n/2 : (n/2)+1); 

    for(int i = 0; i < meio ; i++) {
        bot = (n-1)-i;

        for(int j = i; j <= bot; j++){
            m[i][j] = i+1;
            m[bot][j] = i+1;
            m[j][i] = i+1;
            m[j][bot] = i+1;
        }
    }

    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            if(j == 0) cout << setw(3) << m[i][j];
            else cout << " " << setw(3) <<m[i][j];
        }
        cout << endl;
    }

    cout << endl;

    return;
}

int main(){
    
    int n;
    cin >> n;
    while(n != 0) {
        matriz(n);
        cin >> n;
    }
    return 0;
}