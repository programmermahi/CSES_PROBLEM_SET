#include <iostream>
using namespace std;

int main() {
    int n, ara[200001] = {0}, i, x;
    cin >> n;

    for (i = 1; i < n; i++) {
        cin >> x;
        ara[x] = 1;
    }

    for (i = 1; i <= n; i++) {
        if (ara[i] == 0) {
            cout << i << endl;
        }
    }
    
    return 0;
}
