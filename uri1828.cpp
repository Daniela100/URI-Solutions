#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main() {
    
    vector<pair<string,string>> pos(10);

    // primeiro ganha do segundo
    pos[0] = make_pair("tesoura", "papel"  );
    pos[1] = make_pair("papel",   "pedra"  );
    pos[2] = make_pair("pedra",   "lagarto");
    pos[3] = make_pair("lagarto", "Spock"  );
    pos[4] = make_pair("Spock",   "tesoura");
    pos[5] = make_pair("tesoura", "lagarto");
    pos[6] = make_pair("lagarto", "papel"  );
    pos[7] = make_pair("papel",   "Spock"  );
    pos[8] = make_pair("Spock",   "pedra"  );
    pos[9] = make_pair("pedra",   "tesoura");

    int n;
    cin >> n;
    for(int i=1 ; i<=n ; i++) {
        string resp = "";

        string s, r;
        cin >> s >> r;

        if(s == r) {
            resp = "De novo!";
        } else {
            for(int j=0 ; j<10 ; j++) {
                if(pos[j].first == s && pos[j].second == r) {
                    resp = "Bazinga!";
                } else if(pos[j].first == r && pos[j].second == s) {
                    resp = "Raj trapaceou!";
                }
            }
        }

        cout << "Caso #" << i << ": " << resp << endl;

    }
    

    return 0;
}