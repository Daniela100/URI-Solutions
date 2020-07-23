#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> num;
    int n;
    cin >> n;
    int x;
    for(int i=0 ; i<n ; i++) {
        cin >> x;
        num.push_back(x);
    }

    for(int i=0 ; i<num.size() ; i++) {
        if(num[i]==0) cout << "NULL\n";
        else if(num[i] > 0) {
            if(num[i]%2 == 0) cout << "EVEN POSITIVE\n";
            else cout << "ODD POSITIVE\n";
        } else {
            if(num[i]%2==0) cout << "EVEN NEGATIVE\n";
            else cout << "ODD NEGATIVE\n";
        }
    }
    return 0;
}