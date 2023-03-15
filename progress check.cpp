#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,r;
    cin >> a >> b >> c >> d;
     r=b/a;
    if ((r*a==b)&&(r*b==c)&&(r*c==d)){
        cout << "YES";

    } else  {
        cout << "NO";
    }
    return 0;
}
