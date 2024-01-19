#include <bits/stdc++.h>
using namespace std;

string calculate(int n, int m, string s1, string s2) {
    string res = "";
    for (int i = 0; i < m; i++) {
        res.append(s1);
    }
    for (int i = 0; i < n - m; i++) {
        res.append(s2);
    }
    return res;
}

int main() {
    // Redirect input and output to files
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int b, g;
    cin >> b >> g;

    if (b > g) {
        cout << calculate(b, g, "BG", "B");
    } else if (b < g) {
        cout << calculate(g, b, "GB", "G");
    } else {    
        cout << calculate(g, b, "GB", "aswin");
    }

    return 0;
}
