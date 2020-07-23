#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main() {
    int mes;
    cin >> mes;

    string ano[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << ano[mes-1] << endl;
    
    return 0;
}