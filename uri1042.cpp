#include <iostream>
using namespace std;

int main(){

    int v[3];
    int aux[3];

    for(int i=0 ; i<3 ; i++){
        cin >> v[i];
        aux[i] = v[i];
    }

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<2 ; j++){
            if(v[j] >= v[j+1]){
                int aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
        }
    }

    for(int i=0 ; i<6 ; i++){
        if(i<3){
            cout << v[i] << endl;
            if(i==2) cout << endl;
        }

        else cout << aux[i-3] << endl;        
    }

    return 0;
}