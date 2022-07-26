#include <iostream>
using namespace std;

bool divideevenly(int &w)
{
    if (w % 2 == 0 && w > 2)
        return true;
    else
        return false;
}

int main()
{

    int w;
    cin >> w;
    if (divideevenly(w))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
