#include <iostream>
using namespace std;
int x, x1;
int main() {
    cin >> x;
    while (x!=0) {
        x1=(x1*10) + (x%10);
        x=x/10;
    }
    cout << "" << x1;

return 0;
}
