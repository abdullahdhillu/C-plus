#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int i, n, k, t;
    cout << "Konsa table chahiye apko? ";
    cin >> t;
    cout<<"Kahan sy start krna hai? ";
    cin>>k;
    cout << "Kahan Tak? ";
    cin >> n;
    for (i = k; i <= n; ++i)
    {
        cout << t << " x " << i << " = " << t * i << endl;
    }
    return 0;

}

