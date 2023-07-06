#include <iostream>
#include <string>

using namespace std;
int main() {

    int a;
    cin >> a;
    string months[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
    cout << months[a-1] << endl;

    return 0;
}
