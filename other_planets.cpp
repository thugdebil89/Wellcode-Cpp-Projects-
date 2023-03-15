#include <iostream>

using namespace std;

int main()

{

int n,nr,d=0,k,prima;

cin>>n;

nr=n; k=1;

while (nr/10!=0) {k=k*10; nr=nr/10;}

prima=n/k;

k=k/10;

while (k!=0)

{

  if (n/k%10 %prima ==0)  d++;

  k=k/10;

}

cout<<d;

return 0;

}
