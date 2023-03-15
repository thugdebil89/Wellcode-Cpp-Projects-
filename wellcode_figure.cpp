#include <iostream>

using namespace std;

int main() {

{ int n,cw;

    cin>>n;

    cw=n;

  while (cw>9)

   { cw=1;

       while (n!=0)

   {

       cw=cw*(n%10);

       n=n/10;

      }n=cw; }

  cout<<cw;
}

  return 0;
}

