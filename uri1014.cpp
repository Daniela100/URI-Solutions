#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
	double distancia, cgasto, consumo;
	
	cin >> distancia >> cgasto;
	
	consumo = distancia/cgasto;
	
	printf ("%.3lf" " " "km/l\n", consumo);
	
	return 0;
	
}