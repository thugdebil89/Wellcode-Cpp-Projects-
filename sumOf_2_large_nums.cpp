#include <iostream>
#include <cstring> // pentru functia memset

using namespace std;

void aduna(int a[], int b[], int rezultat[]) {
    int n = a[0], m = b[0]; // dimensiunile celor doua numere
    int len = max(n, m) + 1; // dimensiunea maxima a sumei + 1 pentru rest
    memset(rezultat, 0, len * sizeof(int)); // initializam suma cu 0

    int rest = 0; // initializam restul la 0
    for (int i = 1; i <= len; i++) {
        int val = rest;
        if (i <= n) {
            val += a[i];
        }
        if (i <= m) {
            val += b[i];
        }
        rest = val / 10; // calculam restul impartirii la 10
        val %= 10; // calculam valoarea cifrei de pe pozitia i

        rezultat[i] = val; // salvam cifra in suma
    }

    // daca ultima cifra calculata este 0, o vom elimina
    if (rezultat[len] == 0) {
        len--;
    }

    rezultat[0] = len; // actualizam dimensiunea sumei
}
