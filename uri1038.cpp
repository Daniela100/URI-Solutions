#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{
	int codigo, quant;
	double total;
	
	cin >> codigo;
	cin >> quant;
	
	if ( codigo == 1){
		total = quant * 4.00;
	} else if ( codigo == 2){
		total = quant * 4.50;
	} else if (codigo == 3){
		total = quant * 5.00;
	} else if (codigo == 4){
		total = quant * 2.00;
	} else if (codigo == 5){
		total = quant * 1.50;
	}

    printf ("Total: R$ %.2lf\n", total);
	return 0;
}