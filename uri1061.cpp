#include<iostream>
#include<string>
using namespace std;

int main() {

    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    string aux;

    cin >> aux >> d1 >> h1 >> aux >> m1 >> aux >> s1;
    cin >> aux >> d2 >> h2 >> aux >> m2 >> aux >> s2;

    int total1 = s1 + (60*m1) + (60*60*h1);
    int total2 = s2 + (60*m2) + (60*60*h2);

    int sub = d2 - d1;
    // if(h2 < h1) sub -= 1;
    total2 += (sub*86400);

    int resp = total2 - total1;

    // 1 dia ---- 86400 s
    // x dia ---- y s
    cout << resp/86400 << " dia(s)\n";
    resp = resp%86400;
    // 1 hora ----- 3600 s
    // x hora ----- y s
    cout << resp/3600 << " hora(s)\n";
    resp %= 3600;
    cout << resp/60 << " minuto(s)\n";
    cout << resp%60 << " segundo(s)\n";

    return 0;
}