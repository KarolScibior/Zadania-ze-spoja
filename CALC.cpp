#include <iostream>

using namespace std;

class Calculator
{
    int a, b;
    char c;

    public:
        Calculator(char x, int y, int z)
        {
            c=x;
            a=y;
            b=z;
        }

        ~Calculator()
        {
            cout<<Maths(a,b,c)<<endl;
        }

        int Maths(int a, int b, char c)
        {
            if (c=='+') return a+b;
                else if (c=='-') return a-b;
                    else if (c=='*') return a*b;
                        else if (c=='/') return a/b;
                            else return a%b;
        }
};

int main()
{
    int a, b;
    char c;
    while(cin>>c>>a>>b)
    {
        Calculator obj(c,a,b);
    }
    return 0;
}
