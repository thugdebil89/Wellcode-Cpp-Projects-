#include <iostream>
using namespace std;
int main () {
    int A, B, C;
    cin >> A >> B >> C;
    if (A < B && B == C) {
        cout << " yes ";
    } else if ( A <=
               B && B == C ){
        cout << " no ";
    } else {
        cout << " yes ";
    }

    return 0;
}
