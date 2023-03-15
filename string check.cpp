#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < 100 && a > -100 && d < 100 && d > -100 && c < 100 && c > -100 && d < 100 && d > -100 ) {
    if (a == b && a == c && a == d && b == c && b == d && c == d) {
        cout << "Non Monoton";
    }
    else if (a >= b && a >= c && a >= d && b >= c && b >= d && c >= d) {
        cout << "Decreasing";
    }
    else if (a <= b && a <= c && a <= d && b <= c && b <= d && c <= d) {
        cout << "Increasing";
    }else {
        cout << "Non Monoton";
        }
    }
    return 0;

}
