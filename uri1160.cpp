#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    int t;
    cin >> t;
    int pa, pb;
    float g1, g2;
    int anos;
    
    for(int i=0 ; i<t ; i++) {
        cin >> pa >> pb >> g1 >> g2;
        anos = 0;
        bool cem = false;
        
        while(true) {
            pa = pa+pa*(g1/(1.0*100));
            pb = pb+pb*(g2/(1.0*100));
            
            anos++;
            if(anos == 101) { 
                cem = true;
                cout << "Mais de 1 seculo.\n";
                break;
            }
            if(pa > pb) break;
        }
        if(!cem) cout << anos << " anos.\n";
    }
    return 0;
}