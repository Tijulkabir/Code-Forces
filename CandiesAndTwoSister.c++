#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t >= 1 && t <= 10000)
    {
        int a, b, count = 0;
        cin >> a >> b;

        while (a > b)
        {
            a++;
            b--;
            count++;
        }

        cout << count << endl;
        t--;
    }

    return 0;
}
