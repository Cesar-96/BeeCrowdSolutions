#include <iostream>
#include <string>
#include<math.h>

using namespace std;
int main() {

    int n;
    cin >> n;
    if (n % 2 == 0) {
        n += 1;
        cout << n << endl;
        int i = 0;
        while (i < 5)
        {
            n += 2;
            cout << n << endl;
            i++;
        }
    }
    else {
        int i = 0;
        while (i < 6)
        {
            cout << n << endl;
            n += 2;
            i++;
        }
    }
}
