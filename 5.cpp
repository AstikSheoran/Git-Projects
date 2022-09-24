#include <iostream>
using namespace std;
/*
Pattern 2
      1
    3 2
  4 5 6
7 8 9 10
*/
int main() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    int i = 1;
    int val = 1;
    while (i <= n) {
        int k = 1;
        while (k <= n - i){
            cout << "\t";
            k = k + 1;
        }

        int j = 1;
        while (j <= i) {
            cout << val << "\t";
            j = j + 1;
            val = val + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}