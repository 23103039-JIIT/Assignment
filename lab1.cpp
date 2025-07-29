#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    double avg = 0.0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        avg += a[i];
    }

    cout << "Average: " << avg / n << endl;
    
    return 0;
}