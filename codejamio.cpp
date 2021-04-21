#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int ti = 1; ti <= t; ti++) {
        int n, a[101] = {0}, s, c = 0, j = 1;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> s;
            a[s]++;
        }
        //cout<<a[10]<<" "<<a[20]<<" "<<a[25];
        for (int i = 1; i <= 100; i++) {
            if (a[i]) {
                c += a[i] * j;
                j++;
            }
        }
        cout << "Case #" << ti << ": " << c << '\n';
    }
    return 0;
    }