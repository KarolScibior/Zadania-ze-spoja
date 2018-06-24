#include <iostream>

using namespace std;

 int nwd(int a, int b)
 {
    if (a==b) return a;
        else if (a>b) nwd(a-b,b);
            else nwd(a,b-a);
 }

int main()
{
    int t, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<nwd(a,b)<<endl;
    }
    return 0;
}
