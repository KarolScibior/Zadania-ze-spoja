#include <iostream>

using namespace std;

int main()
{
    float a, b, c, delta;
    while(cin>>a>>b>>c)
    {
        delta=(b*b)-(4*a*c);
        if(delta<0) cout<<"0"<<endl;
            else if(delta==0) cout<<"1"<<endl;
                else cout<<"2"<<endl;
   }
return 0;
}
