#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int codigo1, codigo2, numpecas1, numpecas2;
	double valorunitario1, valorunitario2, valorpagar;
	
	cin >> codigo1 >> numpecas1 >> valorunitario1;
	cin >> codigo2 >> numpecas2 >> valorunitario2;
	
	valorpagar = (numpecas1*valorunitario1)+(numpecas2*valorunitario2);
	
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision (2) << valorpagar << endl;
	
	return 0;
	
}