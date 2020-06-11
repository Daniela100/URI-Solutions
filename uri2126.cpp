#include <iostream>
#include <string>
using namespace std;

int main() {

    string n1, n2;
    int caso = 1;

    while(cin >> n1 >> n2) {
        long long subs = 0, pos = 0;
        for(int i=0 ; i<n2.size() - n1.size() + 1 ; i++) {
            if(n1 == n2.substr(i, n1.size())) {
                subs++;
                pos = i+1;
            }
        }

        cout << "Caso #" << caso << ":"  << endl;

        if(!subs) {
            cout << "Nao existe subsequencia\n\n";
        } else {
            cout << "Qtd.Subsequencias: " << subs << endl;
            cout << "Pos: " << pos << "\n\n";
        }

        caso++;
    }
    
    return 0;
}