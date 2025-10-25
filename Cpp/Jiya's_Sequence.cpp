#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int product = 1;
        int new_product = 1; 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            product *= a[i];
        }
            for(int i = 0; i <n ; i++)
            {
            if (product % 10 == 0)
            {
               new_product = product /10; 
             
            }
           else if (new_product % 10 == 2 || new_product % 10 == 3 || new_product % 10 == 5)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

            }
            if (product % 10 == 2 || product % 10 == 3 || product % 10 == 5)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        
    }

    return 0;
}
