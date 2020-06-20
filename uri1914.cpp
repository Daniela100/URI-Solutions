#include <iostream>
#include <string>

using namespace std;

int main() {
    int c;

    cin >> c;
    string j1, j2;
    string choice1, choice2;
    long long n1, n2;

    for(int i=0 ; i<c ; i++) {
        cin >> j1 >> choice1 >> j2 >> choice2;
        cin >> n1 >> n2;

        long long soma = n1 + n2;

        if(soma%2 == 0) {
            if(choice1 == "PAR")
                cout << j1;
            else if(choice2 == "PAR")
                cout << j2;
        } else {
            if(choice1 == "IMPAR")
                cout << j1;
            else if(choice2 == "IMPAR")
                cout << j2;
        }

        cout << endl;
    }
    
    return 0;
}