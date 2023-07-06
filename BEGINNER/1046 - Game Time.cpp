#include <iostream>
#include <string>

using namespace std;
int main() {

    int s;
    int e;
    cin >> s >> e;
    if (s >= e)
    {
        cout << "O JOGO DUROU " << 24 - s + e<<" HORA(S)"<<endl;
    }
    else {
        cout << "O JOGO DUROU " << e - s << " HORA(S)" << endl;;
    }


    return 0;
}
