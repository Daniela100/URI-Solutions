#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main() {

    vector<int> num;
    int n;
    cin >> n;
    int x;
    for(int i=0 ; i<n ; i++) {
        cin >> x;
        if(x>=10 && x<=20) {
            num.push_back(x);
        }
    }

    cout << num.size() << " in\n" << n - num.size() << " out\n";
    return 0;
}