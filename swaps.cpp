#include <iostream>

using namespace std;

int main()

{

   int N, i, cif, nrcif, v[10]={0};

   cin >> N;

   nrcif=0;

   while (N)

   {

       cif=N%10;

       ++nrcif;

       v[nrcif]=cif;

       N=N/10;

   }

       cif=v[2];

       v[2]=v[nrcif-1];

       v[nrcif-1]=cif;

       for (i=nrcif; i>0; i--)

       {

           cout << v[i];

       }

   return 0;
}

