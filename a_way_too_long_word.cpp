#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string word;
        getline(cin, word);

        if (word.length() > 10)
        {
            cout << word[0] << (word.length() - 2) << word[word.length() - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}
