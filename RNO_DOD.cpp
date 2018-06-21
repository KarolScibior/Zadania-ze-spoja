#include <iostream>

using namespace std;

class Zestaw
{
    int n;

    public:
        Zestaw()
        {
            cin>>n;
        }
        void dodawanie(int n)
        {
            int suma=0, liczba;
            while(n--)
            {
                cin>>liczba;
                suma+=liczba;
            }
            cout<<suma<<endl;
        }
        ~Zestaw()
        {
            dodawanie(n);
        }
};

int main()
{
    int t;
    cin>>t;
    while(t--) Zestaw A;
    return 0;
}
