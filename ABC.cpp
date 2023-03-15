#include <iostream>
using namespace std;

int main() {
    int a, b, c, x, numar_cifre = 0, prima_cifra, ultima_cifra;
    cin >> a >> b >> c >> x;
        ultima_cifra = x % 10;
    while(x > 9) {
        numar_cifre++;
        x = x / 10;
    }
        numar_cifre++;
        prima_cifra = x;
    if(numar_cifre == a && prima_cifra == b && ultima_cifra == c) {
        cout << "YES";
   } else {
        cout << "NO";
   }
return 0;
}
