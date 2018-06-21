#include <iostream>
#include <cmath>
#define N 10

using namespace std;

int main()
{
    int D, a, b, T[N];
    cin>>D;
    for(int i=0;i<D;i++)
    {
        cin>>a>>b;
        b %= 4;
        if(b == 0) b = 4;
        T[i]=(int)pow(a%10,b)%10 ;
    }
    for(int i=0;i<D;i++)
    {
        cout<<T[i]<<endl;
    }
    return 0;
}
