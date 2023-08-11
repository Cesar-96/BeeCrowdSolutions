#include <iostream>
#include<string>
using namespace std;



int main()
{
    string word;
    cin >> word;
    if (word.size() >= 10)
    {
        cout << "palavrao" << endl;
    }
    else {
        cout << "palavrinha" << endl;
    }

    return 0;
}
