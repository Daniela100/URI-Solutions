#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	long long int n, i, t;
	
	cin >> n;
	
	for (i = 2;i<=n;i += 2){
		t = pow(i,2);
		cout << i << "^2 = " << t << endl;
	}
	
	
	return 0;
}
