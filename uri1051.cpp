#include<cstdio>
#include<iostream>
using namespace std;

int main() {
    float salario, aux;
    cin >> salario;

    if(salario >= 0 && salario <= 2000) {
        cout << "Isento\n";
        return 0;
    } else if(salario > 2000 && salario <= 3000) {
        aux = (salario - 2000)*0.08;
    } else if(salario > 3000 && salario <= 4500) {
        aux = (salario-3000)*0.18 + 1000*0.08;
    } else if(salario > 4500) {
        aux = (salario - 4500)*0.28 + 1500*0.18 + 1000*0.08;
    }

    printf("R$ %.2f\n", aux);
    
    return 0;
}