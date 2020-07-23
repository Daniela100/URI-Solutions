#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	
	int segundos, horas, restoh, minutos, segundo;
	
	cin >> segundos;
	
	horas = segundos / 3600;
	restoh = segundos%3600;
	minutos = restoh/60;
	segundo = restoh%60;
	
	printf ("%d:%d:%d\n", horas, minutos, segundo);
	
	return 0;
}