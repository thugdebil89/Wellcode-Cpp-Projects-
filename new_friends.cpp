#include <iostream>

using namespace std;

int main(){

   int primul, actual,contor=0;

   //Citeste primul numar

   cin >> primul;

   actual = primul;

   //Citeste sirul de numere, contorizand cate valori divizibile cu primul numar din sir exista

   while(actual!=0){

       if(actual%primul==0) contor++;

       cin >> actual;

   }

   cout << contor;

}
