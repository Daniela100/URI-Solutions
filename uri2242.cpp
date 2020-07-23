#include <iostream>
#include <cstring>
using namespace std;
int main(){

    string str;
    char aux[51];
    int contv = 0;

    getline(cin, str);

    for(int i=0, j=0 ; i < str.size() ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            aux[j] = str[i];
            contv++;
            j++;
        }
    }
    
    bool eh_engra = true;

    for(int i=0, j=contv-1 ; i<contv ; i++, j--){

            if(aux[i] != aux[j]){
                eh_engra = false;
                break;
            }
    }

    cout << (eh_engra?"S":"N") << endl;
    
    return 0;
}