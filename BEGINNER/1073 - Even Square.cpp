#include <iostream>
#include <string>
#include<math.h>

using namespace std;
int main() {

    int n;
    cin >> n;
    for (int i = 2; i <= n; i=i + 2)
    {
        cout << i << "^2 = " << int(pow(i, 2)) << endl;
    }
    return 0;
}
