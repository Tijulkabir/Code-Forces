#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,x=0;
    cin >> n;

    if(n>=1 && n<=150)

    {
     
       for (int i = 0; i <n; i++)
       {
           string bit;
        cin >> bit;
         if(bit == "X++" || bit =="++X" )

         {
            x++;
         }

         else if(bit =="X--" || bit =="--X")

         {
            x--;
         }
       }
       cout << x <<endl;
    }

return 0;
}