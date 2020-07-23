#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char v[15];
    cin >> v;

    if(strcmp(v,"vertebrado") == 0){
        cin >> v;
        if(strcmp(v, "ave") == 0){
            cin >> v;
            if(strcmp(v,"carnivoro") == 0) cout << "aguia\n";
            else cout << "pomba\n"; 
        }
        else{
            cin >> v;
            if(strcmp(v,"onivoro") == 0) cout << "homem\n";
            else cout << "vaca\n"; 
        }
    }

    else{
        cin >> v;
        if(strcmp(v,"inseto") == 0){
            cin >> v;
            if(strcmp(v, "hematofago") == 0) cout << "pulga\n";
            else cout << "lagarta\n";

        } else {
            cin >> v;
            if(strcmp(v,"hematofago") == 0) cout << "sanguessuga\n";
            else cout << "minhoca\n";
        }
    }

    return 0;
}