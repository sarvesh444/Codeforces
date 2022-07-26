// #include <iostream>

// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;

//     int n = s.length();
//     int i = 0;
//     while (i < n)
//     {

//         if (s[i] == 'A' || s[i] == 'a' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o' || s[i] == 'O' || s[i] == 'i' || s[i] == 'I' || s[i] == 'u' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y')
//         {
//             i++;
//         }
//         else if (s[i] >= 65 && s[i] <= 90)
//         {
//             char x = s[i] + 32;
//             cout << '.' << x;
//             i++;
//         }
//         else
//         {
//             cout << '.' << s[i];
//             i++;
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s2;
    cin >> s;
    int x = s.length();
    for (int i = 0; i < x; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            continue;
        }
        else
        {
            s2 += '.';
            s2 += towlower(s[i]);
        }
    }
    cout << s2 << endl;
}