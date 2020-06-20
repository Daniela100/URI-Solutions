#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cin >> n;

    string c[9] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string d[9] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string u[9] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int index = n/100;
    cout << (index > 0 ? c[index-1] : "");

    n %= 100;
    index = n/10;
    cout << (index > 0 ? d[index-1] : "");

    index = n%10;
    cout << (index > 0 ? u[index-1] : "");
    
    cout << endl;
    return 0;
}