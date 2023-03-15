#include <iostream>

using namespace std;

int main()

{

 bool cresc = false, desc = false, nemo = false, primaCitire = true;

 int curr, ant;

 cin >> curr;

 if (curr != 0)

 {

   ant = curr;

   while (curr != 0)

   {

     cin >> curr;

     //DACA DUPA PRIMUL NUMAR AVEM 0

     if (curr == 0)

     {

       if (primaCitire)

       {

         nemo = true;

       }

       break;

     }



     //PRIMA CITIRE

     if (curr < ant)

     {

       desc = true;

       nemo = false;

     }

     if (curr > ant)

     {

       cresc = true;

       nemo = false;

     }

     if (curr == ant && !cresc && !desc)

     {

       nemo = true;

     }



     //DACA NU E PRIMA CITIRE

     if (curr < ant && cresc)

     {

       nemo = true;

       cresc = false;

       desc = false;

       break;

     }

     if (curr > ant && desc)

     {

       nemo = true;

       cresc = false;

       desc = false;

       break;

     }

     ant = curr;

     primaCitire = false;

   }

 }

 else

 {

   nemo = true;

 }

 if (nemo)

 {

   cout << "nemonoton";

 }

 if (cresc)

 {

   cout << "crescator";

 }

 if (desc)

 {

   cout << "descrescator";

 }

 return 0;
