#include <iostream>

using namespace std;

int main()

{

  int n, a, b, c, m;

  cin >> n;

  if (n==1) c=1;

  if (n==2) c=1;

  if (n>2) {

      a=1; b=1; m=2;

      while (m<n) {

          c=a+b; ++m;

          a=b; b=c;

      }

  }

  cout << c;

  return 0;

}
