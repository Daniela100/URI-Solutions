#include <iostream>
#include <cstdio>

using namespace std;

void print(long long int &nota, long long int div, char tipo[]) {

    int cont = nota/div;
    double quat = div/100.0;
    printf("%d %s de R$ %.2f\n", cont, tipo, quat);
    nota %= div;
    return;
}

int main() {
	
	double n;
	int cont = 0;
	long long int nota;
	
	cin >> n;
	
	nota = n * 100;
    char notas[] = "nota(s)";
    char moeda[] = "moeda(s)";

	cout << "NOTAS:" << endl;

    print(nota, 10000, notas);
    print(nota,  5000, notas);
    print(nota,  2000, notas);
    print(nota,  1000, notas);
    print(nota,   500, notas);
    print(nota,   200, notas);
	
    cout << "MOEDAS:\n";
    print(nota, 100, moeda);
	print(nota,  50, moeda);
    print(nota,  25, moeda);
    print(nota,  10, moeda);
    print(nota,   5, moeda);
    print(nota,   1, moeda);
	
	return 0;
}	