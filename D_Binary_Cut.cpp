#include <iostream>
#include <string>

using namespace std;

int min_pieces_to_rearrange(string s) {
    bool sorted = true;
    int transitions = 0;
    char prev_char = s[0];
    
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] != prev_char) {
            transitions++;
            prev_char = s[i];
        }
        if (s[i] < s[i - 1]) {
            sorted = false;
        }
    }
    
    if (sorted) {
        return 1;
    } else {
        return transitions + 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << min_pieces_to_rearrange(s) << endl;
    }
    return 0;
}
