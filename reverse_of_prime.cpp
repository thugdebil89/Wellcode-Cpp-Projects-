#include <iostream>
using namespace std;

int main () {
    int a;
    cin >> a;
    int n = 2;
    int m = 2;
    int invers = 0;
    int copy_a=a;
    int este_prim = 1;
    int invers_este_prim = 1;
    while (a>0) {
        invers = (invers*10)+(a%10);
        a=a/10;
    }
    while (n<copy_a) {
        if (copy_a % n==0){
            este_prim=0;
        }
        ++n;
    }
    while (m<invers) {
        if (invers%m==0){
        invers_este_prim=0;
        }
        ++m;
    }
    if (copy_a==1) {
        este_prim=0;
    }
    if (este_prim==1 && invers_este_prim==1) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
