#include<iostream>

using namespace std;

int main(){

   int n,i,cn;

   cin>>n;

   cn=n;

   while(n!=0){

       for(i=n;i>=1;i--)

           cout<<i<<' ';

       cout<<'('<<cn-n+1<<')'<<endl;

       n--;

   }

   return 0;

}
