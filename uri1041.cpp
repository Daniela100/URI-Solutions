#include <iostream>

using namespace std;

int main(){
	
	double x, y;
	
	cin >> x >> y;
	
	if (x > 0 && y > 0){
		cout << "Q1" << endl;
	}
	 
	if (x < 0 && y > 0){
		cout << "Q2\n";
	}
	 
	if (x > 0 && y < 0){
		cout << "Q4\n";
	}
	 
	if (x < 0 && y < 0){
		cout << "Q3\n";
	}
	 
	if (x == 0 && (y > 0 || y < 0)){
		cout << "Eixo Y\n";
	}
	if (y == 0 && (x > 0 || x < 0))
		cout << "Eixo X\n";
	if (x == 0 && y == 0)
		cout << "Origem\n";
	
	return 0;
}