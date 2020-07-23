#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	double a, b, c, p, at;
	
	cin >> a >> b >> c;
	
	if ((abs(b - c) < a) && (a < b + c) || (abs(a - c) < b) && (b < a + c) || (abs(a - b) < c) && (c < a + b))
    {
		p = a + b + c;
		printf ("Perimetro = %.1lf\n", p);
    }
	else {
		at = ((a + b)*c)/2;
		printf("Area = %.1lf\n", at);
	}	
	return 0;
}