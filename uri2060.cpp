#include <iostream>

using namespace std;

int main() {

    int mult[4] = {0};

    int casos;
    cin >> casos;
    for(int i=0 ; i<casos ; i++) {
        int num;
        cin >> num;
        for(int j=2 ; j<=5 ; j++) {
            if(num%j == 0){
                mult[j-2]++;
            }
        } 
    }

    for(int i=2 ; i<=5 ; i++) {
        cout << mult[i-2] << " Multiplo(s) de " << i << endl; 
    }

    return 0;
}