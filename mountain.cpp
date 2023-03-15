#include <iostream>

using namespace std;

int main(){

int tip_sir = 0, n, x, nr_anterior = 0, i;

cin >> n;

cin >> nr_anterior;

i = 1;

while (i < n){

 cin >> x;

 if (x > nr_anterior && tip_sir == 0)

  tip_sir = 1;

 if (x < nr_anterior && tip_sir == 0)

  tip_sir = 3;

 if (x < nr_anterior && tip_sir == 1)

  tip_sir = 2;

 if (tip_sir == 2 && x > nr_anterior)

  tip_sir = 3;

 if (x == nr_anterior)

  tip_sir = 3;

 nr_anterior = x;

 i++;

}

if (tip_sir == 2)

 cout << "1";

else

 cout << "0";

return 0;

}
