#include <iostream>

using namespace std;

class Predkosc
{
    int v1, v2;

    public:
        Predkosc()
        {
            cin>>v1>>v2;
        }

        ~Predkosc()
        {
            cout<<(2*v1*v2)/(v1+v2)<<endl;
        }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Predkosc obj;
    }
    return 0;
}
