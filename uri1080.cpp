#include <iostream>
using namespace std;
int main() {
	
	int n, maior = 0;
	int i, posicao = 0;
	
	cin >> n;
	
	for (i = 1;i<=100;i++){
		if (n > maior){
			maior = n;
			posicao = i;
		}
		
		cin >> n;
	}
	
	cout << maior << endl;
	cout << posicao << endl;
	
	return 0;
}