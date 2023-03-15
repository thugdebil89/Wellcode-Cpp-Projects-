#include <iostream>
using namespace std;
int main() {
    int x, x1, x2;
    x1 = x>=0;
    x2 = x<0;
    cin >> x;
    if (x>=0) {
        cout << x << " ";
    } else if (x<0) {
        cout << -x;
    }
    return 0;
}
