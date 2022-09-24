#include <iostream>
using namespace std;

int main() {
    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p;
    
    
    int m , n;       // heap memory
    cin >> m >> n;
    int ** p = new int *[m];
    for(int i = 0; i < m; i++){
        p[i] = new int[n];
        for(int j = 0; j < n; j++){
            cin >> p[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        delete [] p[i];
    }
    delete [] p;
    

    int a , b;    // inline function
    cin >> a >> b;

    int max = (a > b) ? a : b;

    int min = (a > b) ? b : a;

    cout << max << endl;
    cout << min << endl;
}
