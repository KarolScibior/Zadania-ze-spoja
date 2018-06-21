#include <iostream>

using namespace std;

class Dodawanie
{
    int a, b, c;

    public:
        Dodawanie()
        {
            cin>>a;
            cin>>b;
            cin>>c;
        }
        ~Dodawanie()
        {
            cout<<a+b+c;
        }
};

int main()
{
    Dodawanie obj;
    return 0;
}
