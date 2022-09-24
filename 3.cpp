#include <iostream>
using namespace std;
    
    /*
    Pattern 1
    1
    12
    123
    1234
    12345
    
    */

int main() {
    int n;
    cout << "Enter the n" << endl;
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}