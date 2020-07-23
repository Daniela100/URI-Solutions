#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int numfun;
	double horas, valorhora, salario;
	
	cin >> numfun >> horas >> valorhora;
	
	salario = valorhora * horas;
	
	cout << "NUMBER = " << numfun << endl;
	cout << "SALARY = U$ " << fixed << setprecision (2) << salario << endl;
 
    return 0;
}