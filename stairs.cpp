#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int min_treapta = min(min(a, b), c);
    int max_treapta = max(max(a, b), c);

    int trepte_libere;

    if (a == b && b == c) { // toți se opresc la aceeași treaptă
        trepte_libere = 0;
    } else if (a == b || a == c || b == c) { // doi dintre ei se opresc la aceeași treaptă
        trepte_libere = max_treapta - min_treapta - 1;
    } else { // toți se opresc la trepte diferite
        trepte_libere = max_treapta - min_treapta - 2;
    }

    cout << trepte_libere << endl;

    return 0;
}
