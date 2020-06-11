#include <iostream>

using namespace std;

int main() {

    int diasM[12] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int dia, mes;

    while(cin >> mes >> dia) {
        if(mes == 12) {
            if(dia == 24) cout << "E vespera de natal!\n";
            else if(dia == 25) cout << "E natal!\n";
            else if(dia > 25)  cout << "Ja passou!\n";
            else cout << "Faltam " << 25 - dia << " dias para o natal!\n";
        } else {
            int dias = diasM[mes] - dia + 25;
            for(int i=mes+1 ; i<12 ; i++) {
                dias += diasM[i];
            }

            cout << "Faltam " << dias << " dias para o natal!\n";
        }
    }
    
    return 0;
}