#include <iostream>
using namespace std;


int factorial(int n ){
    if(n == 0){
        return 1;
    }
    int smalloutput = factorial(n - 1);
    int output = n * smalloutput;
    return output;
}

int main() {
    int i = 0;
    cin >> i;
    cout << factorial(i) << endl;
}