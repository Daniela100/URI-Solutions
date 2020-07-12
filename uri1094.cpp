#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main() {

    int n;
    cin >> n;
    // cobaias[0] = coelhos, cobaias[1] = ratos, cobaias[2] = sapos
    vector<int> cobaias(3, 0);
    int soma = 0;
    for(int i=0 ; i<n ; i++) {
        int n;
        char tipo;
        cin >> n >> tipo;
        soma += n;
        if(tipo == 'C') {
            cobaias[0] += n;
        } else if(tipo == 'R') {
            cobaias[1] += n;
        } else if(tipo == 'S') {
            cobaias[2] += n;
        }
    }

    cout << "Total: " << soma << " cobaias\n";
    cout << "Total de coelhos: " << cobaias[0] << endl;
    cout << "Total de ratos: " << cobaias[1] << endl;
    cout << "Total de sapos: " << cobaias[2] << endl;
    double c = (100.0*cobaias[0])/soma;
    double r = (100.0*cobaias[1])/soma;
    double s = (100.0*cobaias[2])/soma;

    printf("Percentual de coelhos: %.2lf %%\n", c);
    printf("Percentual de ratos: %.2lf %%\n", r);
    printf("Percentual de sapos: %.2lf %%\n", s);

    return 0;
}