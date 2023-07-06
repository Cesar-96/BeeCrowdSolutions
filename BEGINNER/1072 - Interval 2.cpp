#include <iostream>
#include <string>

using namespace std;
int main() {

    int n;
    cin >> n;
    int number;
    int in{ 0 }, out{0};
    for (int i = 0; i < n; i++) {
        cin >> number;
        if (number >= 10 && number <= 20)
        {
            in++;
        }
    }
    out = n - in;
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}
