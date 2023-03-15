#include <iostream>

using namespace std;

int main() {

int a, b, c;

cin >> a >> b >> c;

int moda, modb, modc;

if (a < 0)moda = -a;

else moda = a;

if (b < 0)modb = -b;

else modb = b;

if (c < 0)modc = -c;

else modc = c;

if (moda <= modb && moda <= modc) {

 if (modb <= modc) cout << a << " " << b << " " << c;

 else cout << a << " " << c << " " << b;

}

else if (modb <= moda && modb <= modc) {

 if (moda <= modc) cout << b << " " << a << " " << c;

 else cout << b << " " << c << " " << a;

}

else {

 if (moda <= modb) cout << c << " " << a << " " << b;

 else cout << c << " " << b << " " << a;

}
return 0;

}
