#include <iostream>

using namespace std;

int main(){

    long long n, i=0;
    cin >> n;

    bool atacada[n] = {0};
    long long estrela[n];
    long long soma = 0, roubadas = 0;

    for(int i=0 ; i<n ; i++) {
        cin >> estrela[i];
    }

    while(i >= 0 && i < n) {
        long long j = i;

        if(!atacada[i]) roubadas++;

        atacada[i] = true;
            
        if(estrela[j]%2 == 0) i--;
        else i++;

        if(estrela[j] > 0) estrela[j]--;
    }

    for(long long i=0 ; i<n ; i++) {
        soma += estrela[i];
    }

    cout << roubadas << " " << soma << endl;

    return 0;
}