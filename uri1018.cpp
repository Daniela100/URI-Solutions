#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main() {
    int c100, c50, c20, c10, c5, c2, c1, x;
    int a, b, c, d, e, f;
    
    cin >> x;
    
    c100=x/100;
    a = x%100;
    c50 = a/50;
    b = a%50;
    c20 = b/20;
    c = b%20;
    c10 = c/10;
    d = c%10;
    c5 = d/5;
    e = d%5;
    c2 = e/2;
    f = e%2;
    
    printf("%d\n", x);
    printf("%d"" ""nota(s) de R$ 100,00\n", c100);
    printf("%d"" ""nota(s) de R$ 50,00\n", c50);
    printf("%d"" ""nota(s) de R$ 20,00\n", c20);
    printf("%d"" ""nota(s) de R$ 10,00\n", c10);
    printf("%d"" ""nota(s) de R$ 5,00\n", c5);
    printf("%d"" ""nota(s) de R$ 2,00\n", c2);
    printf("%d"" ""nota(s) de R$ 1,00\n", f);
    
    return 0;
}