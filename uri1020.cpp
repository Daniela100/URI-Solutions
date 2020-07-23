#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	int dias, anos, resto, restomes, resto2;
	
	cin >> dias;
	
	anos = dias/365;
	resto = dias%365; 
	restomes = resto/30;
	resto2 = resto%30;
	
	
	printf ("%d ano(s)\n", anos);
	printf("%d mes(es)\n", restomes);
	printf ("%d dia(s)\n", resto2);
	
	
	return 0;
}