#include <iostream>
#include <string>

using namespace std;

int main() {

    string tweet;

    getline(cin, tweet);

    if(tweet.size() <= 140) {
        cout << "TWEET";
    } else {
        cout << "MUTE";
    }

    cout << endl;

    return 0;
}