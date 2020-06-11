#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
using namespace std;

int main() {

    int n, m;
    vector< pair<int, int> > local;
    cin >> n >> m;

    int a[n][m];

    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<m ; j++) {
            cin >> a[i][j];
            if(a[i][j] == 42) {
                local.push_back(make_pair(i,j));
            }
        }
    }

    if(local.size() == 0) {
        cout << "0 0\n";
        return 0;
    }

    bool encontrei = false, parar = false;
    int x = 0, y = 0;

    for(int l = 0 ; l<local.size() ; l++) {
        x = local[l].first;
        y = local[l].second;

        parar = false;

        if(x-1 >= 0 || x+1 < n || y+1 < m || y-1 >= 0) {
            for(int j=y-1 ; j <= y+1 ; j++) {
                for(int i=x-1 ; i<=x+1 ; i++) {
                    if(j != y && i != x) {
                        if(a[i][j] != 7) {
                            parar = true;
                            break;
                        }
                    }
                }

                if(parar) break;
            }
        }

        if(!parar) {
            encontrei = true;
            break;
        }
    }

    if(encontrei) cout << x+1 << " " << y+1 << endl;
    else {
        cout << "0 0\n";
    }

    return 0;
}