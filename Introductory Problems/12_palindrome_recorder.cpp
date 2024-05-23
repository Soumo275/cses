#include "bits/stdc++.h"
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, long> m;
    for (char x : s) {
        m[x]++;
    } 

    long odd_count = 0;
    char odd_char;
    for (auto p : m) {
        if (p.second % 2 != 0) {
            odd_count++;
            odd_char = p.first;
        }
    }

   
    if (odd_count > 1) {
        cout << "NO SOLUTION" << endl;
    } else {
        
        string half = "";


        for (auto p : m) {
            half += string(p.second / 2, p.first);
        }

        string result = half;

       
        if (odd_count == 1) {
            result += odd_char;
        }

        reverse(half.begin(), half.end());
        result += half;

        cout << result << endl;
    }

    return 0;
}
