#include <iostream>
#include <cstdio>

using namespace std;

int main (){
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if (a > b && a > c){
		printf ("%d eh o maior\n", a);
	}
	if (b > a && b > c){
		printf("%d eh o maior\n", b);
	}
	if (c > a && c > b){
		printf("%d eh o maior\n", c);
	}
	return 0;
}