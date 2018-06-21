#include <iostream>
#include <cmath>

using namespace std;

class Sfery
{
    double r, d;

    public:

        Sfery()
        {
            cin>>r>>d;
        }

        ~Sfery()
        {
            cout<<((r*r)-((d*d)/4))*M_PI<<endl;
        }
};

int main()
{
    Sfery obj;
    return 0;
}
