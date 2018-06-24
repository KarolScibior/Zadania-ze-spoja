#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int *T = new int [n];
        for(int i=0;i<n;i++)
        {
            cin>>T[i];
        }
        while(n--)
        {
            cout<<T[n]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
