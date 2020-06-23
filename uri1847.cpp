#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int a, b, c;
    int ba, cb;
    char em[3];
    em[0] = ':';

    cin >> a >> b >> c;

    ba = abs(b-a);
    cb = abs(c-b);

    if(a > b && b <= c) 
        em[1] = ')';
    else if(a < b && b >= c) 
        em[1] = '(';
    else if(a < b && b < c && ba > cb) 
        em[1] = '(';
    else if(a < b && b < c && ba <= cb) 
        em[1] = ')';
    else if(a > b && b > c && ba > cb) 
        em[1] = ')';
    else if(a > b && b > c && ba <= cb) 
        em[1] = '(';
    else if(a == b && b > c) 
        em[1] = '(';
    else if(a == b && b < c) 
        em[1] = ')';

    cout << em[0] << em[1] << endl;
    return 0;
}