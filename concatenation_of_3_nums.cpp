#include<iostream>

using namespace std;

int main() {

   int A, B, C, nrA, nrB = 1, nrC = 1, cB, cC;

   cin >> A >> B >> C;

   cB = B;

   cC = C;

   if (B == 0)

       nrB = 10;

   else

       while (cB != 0) {

           nrB *= 10;

           cB /= 10;

       }

   if (C == 0)

       nrC = 10;

   else

       while (cC != 0) {

           nrC *= 10;

           cC /= 10;

       }

   A = A * nrB + (A < 0 ? -B : B);

   A = A * nrC + (A < 0 ? -C : C);

   cout << A << ' ' << 2 * A;

   return 0;

}
