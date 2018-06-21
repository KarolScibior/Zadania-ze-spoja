#include <iostream>

using namespace std;

int main()
{
    long long n, x, y=0, z=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(y > 0)
            y += x;
        else
            y = x;
        if(y > z)
            z = y;
    }
    cout<<z;
}
