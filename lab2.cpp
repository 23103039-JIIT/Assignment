#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, rev;
    cout << "Enter a string: ";
    getline(cin, s);

    rev = s; // Copy the original string

    reverse(rev.begin(), rev.end());
    cout << s << endl;
    cout << "Reversed string: " << rev << endl;
    return 0;
}