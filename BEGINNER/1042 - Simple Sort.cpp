#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>

using namespace std;

void print(int numbers[]) {
    for (int i = 0; i < 3; i++)
    {
        cout << numbers[i] << endl;
    }
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int numbers[] = { x,y,z };
    int temp[] = {x,y,z};

    if (temp[0] > temp[0 + 1])
    {
        int tempNumber = temp[0 + 1];
        temp[0 + 1] = temp[0];
        temp[0] = tempNumber;
    }
    if (temp[0 + 1] > temp[0 + 2])
    {
        int tempNumber = temp[0 + 1];
        temp[0 + 1] = temp[0 + 2];
        temp[0 + 2] = tempNumber;
    }
    if (temp[0] > temp[0 + 1])
    {
        int tempNumber = temp[0 + 1];
        temp[0 + 1] = temp[0];
        temp[0] = tempNumber;
    }

    print(temp);
    cout << endl;
    print(numbers);
    return 0;
}

