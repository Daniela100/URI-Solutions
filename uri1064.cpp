#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main() {

    vector<double> num;
    double n;

    for(int i=0 ; i<6 ; i++) {
        cin >> n;
        if(n>=0)
            num.push_back(n);
    }

    cout << num.size() << " valores positivos\n";
    double soma = 0;
    for(int i=0 ; i<num.size() ; i++) {
        soma += num[i];      
    }

    printf("%.1lf\n", soma/num.size());
    
    return 0;
}