#include <iostream>
using namespace std;
int main () {
    int a, b;
    cin >> a >> b;
    if ( a < b) {
        cout << "INCREASED";
    } else if (a>b){
        cout << "DECREASED";
    }
    if ( a==b) {
        cout << "CONSTANT";
    }
    return 0;

}
