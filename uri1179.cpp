#include <iostream>
#include<cstdio>
// #include<vector>
using namespace std;
int main(){
    int par[5];
    int impar[5];
    int ipar = 0, iimpar = 0;
    int num;
    bool zera_p = false, zera_i = false;
    
    for(int i=0 ; i<15 ; i++) {
        cin >> num;
        if(num%2 == 0) {
            if(ipar == 4) {
                par[ipar] = num;
                for(int i=0 ; i<=ipar ; i++) {
                    printf("par[%d] = %d\n", i, par[i]);
                }
                zera_p = true;
            } else if(ipar < 4) {
                par[ipar] = num;
                ipar++;
            }
        } else {
            if(iimpar == 4) {
                impar[iimpar] = num;
                for(int i=0 ; i<=iimpar ; i++) {
                    printf("impar[%d] = %d\n", i, impar[i]);
                }
                zera_i = true;
            }else if(iimpar < 4) {
                impar[iimpar] = num;
                iimpar++;
            }
        }

        if(zera_p) {
            ipar = 0;
            zera_p = false;
        }
        if(zera_i) {
            iimpar = 0;
            zera_i = false;
        }
    }

    if(iimpar != 0) {
        for(int i=0 ; i<iimpar ; i++) {
            printf("impar[%d] = %d\n", i, impar[i]);
        }
    }
    if(ipar != 0) {
        for(int i=0 ; i<ipar ; i++) {
            printf("par[%d] = %d\n", i, par[i]);
        }
    }
    return 0;
}