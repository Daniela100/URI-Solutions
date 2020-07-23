#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double v[3];

    for(int i=0 ; i<3 ; i++) cin >> v[i];

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<2 ; j++){
            if(v[j] >= v[j+1]){
                double aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
        }
    }

    double a=v[2], b=v[1], c=v[0];

    if(a >= (b+c)) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if(a*a == (b*b + c*c)) cout << "TRIANGULO RETANGULO\n";
        else if(a*a > (b*b + c*c)) cout << "TRIANGULO OBTUSANGULO\n";
        else if(a*a < (b*b + c*c)) cout << "TRIANGULO ACUTANGULO\n";
        if(a==b && a==c) cout << "TRIANGULO EQUILATERO\n";
        else if(a==b || a==c || b==c) cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}