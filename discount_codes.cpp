#include <iostream>

using namespace std;

int main()

{

   int n,c;

   cin>>n>>c;

   int aux = n;

   int cif=0;

   int numar = 0;

   while(aux>0)

   {

       aux/=10;

       cif++;

   }

   while(cif>0)

   {

       c*=10;

       cif--;

   }

   numar = c + n;

   cout <<numar<< endl <<numar*2;

   return 0;

}
