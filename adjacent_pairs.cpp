#include <iostream>

int main() {

   std::string x;

   std::cin >> x;

   size_t c = 0;



   for (size_t i = 0; i < x.length() - 1; ++i)

       if (!((x[i] + x[i + 1]) & 1))

           ++c;



   std::cout << c;

}
