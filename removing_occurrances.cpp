#include <iostream>

using namespace std;

int main() {
    int n, c, ogl = 1, nr = 1;
    cin >> n >> c;

    if (n == 0 && c == 0) {
        cout << -1;
    } else if (n == 0 && c != 0) {
        cout << 0;
    } else {
        while (n != 0) {
            if (n % 10 != c) {
                ogl = ogl * 10 + n % 10;
                nr = nr * 10;
            }
            n = n / 10;
        }

        ogl = ogl * 10 + 1;

        while (ogl != 0) {
            n = n * 10 + ogl % 10;
            ogl = ogl / 10;
        }

        n = n / 10;

        if (nr == 1) {
            cout << -1;
        } else {
            cout << n % nr;
        }
    }

    return 0;
}
