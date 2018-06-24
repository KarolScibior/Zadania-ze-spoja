#include <iostream>

using namespace std;

int main()
{
    int n, t=10, s;
    while(t--)
    {
        s=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            s+=i;
        }
        cout<<s<<endl;
    }
    return 0;
}
