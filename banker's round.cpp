#include <bits/stdc++.h>
#define ll long long
#define nl endl
using namespace std;

int main()
{
    printf("Enter a number::");
    string s;
    cin >> s;
    int n;
    printf("\n");
    cin >> n;
    int indx = -1;
    int loc = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == '0' && i == 0) || s[i] == '.')
            continue;
        if (s[i] >= '0' && s[i] <= '9')
        {
            loc += 1;
        }
        if (loc == n)
        {
            indx = i;
            break;
        }
    }

    if (indx == -1)
    {
        cout << "The number does not have " << n << " digits." << endl;
        return 0;
    }

    if (indx + 1 < s.size() && s[indx + 1] > '5')
    {
        int x = s[indx] - '0';
        if (x == 9)
        {
            s[indx] = '0';
            for (int i = indx - 1; i >= 0; i--)
            {
                if (s[i] == '.') continue;
                if (s[i] == '9')
                {
                    s[i] = '0';
                }
                else
                {
                    s[i] = (s[i] - '0' + 1) + '0';
                    break;
                }
            }
            cout<<s<<nl;
        }
        else
       {
        s[indx] = (x + 1) + '0';
        }
    }
    else if (indx + 1 < s.size() && s[indx + 1] == '5')
    {
        int y = s[indx] - '0';
        if (y % 2 != 0)
        {
            s[indx] = (y + 1) + '0';
        }
    }

    for (int j = 0; j <= indx; j++)
        cout << s[j];
    cout << nl;

    return 0;
}
