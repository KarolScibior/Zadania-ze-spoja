#include <iostream>

using namespace std;

class Wiatrak
{
    protected:
        int r;
    public:
        virtual void rysuj()=0;
};

class Lewy : public Wiatrak
{
    public:
        Lewy(int x)
        {
            r=x;
        }
        virtual void rysuj()
        {
            char T[100][100];
            for(int i=0;i<2*r;i++)
            {
                for(int j=0;j<2*r;j++)
                {
                    T[i][j]='.';
                }
            }
            for(int i=0,k=0;i<r;i++,k++)
            {
                T[r-k-1][r-k-1]='*';
                for(int j=1;j+k<r;j++)
                {
                    T[r-k-1][r-k-1-j]='*';
                }
                T[r-k-1][r+k]='*';
                for(int j=1;j+k<r;j++)
                {
                    T[r-k-1-j][r+k]='*';
                }
                T[r+k][r-k-1]='*';
                for(int j=1;j+k<r;j++)
                {
                    T[r+k+j][r-k-1]='*';
                }
                T[r+k][r+k]='*';
                for(int j=1;j+k<r;j++)
                {
                    T[r+k][r+k+j]='*';
                }
            }
            for(int i=0;i<2*r;i++)
            {
                for(int j=0;j<2*r;j++)
                {
                    cout<<T[i][j];
                }
                cout<<endl;
            }
        }
};

class Prawy : public Wiatrak
{
    public:
        Prawy(int x)
        {
            r=x;
        }
        virtual void rysuj()
        {
            char T[100][100];
            for(int i=0;i<2*r;i++)
            {
                for(int j=0;j<2*r;j++)
                {
                    T[i][j]='.';
                }
            }
            for(int i=0,k=0;i<r;i++,k++)
            {
                T[r-k-1][r-k-1]='*';
                for(int j=1;j+k<r;j++)
                {
                    T[r-k-1-j][r-k-1]='*';
                }
                T[r-k-1][r+k]='*';
                for(int j=1;j+k<r;j++)
                {
                    T[r-k-1][r+k+j]='*';
                }
                T[r+k][r-k-1]='*';
                for(int j=1;j+k<r;j++)
                {
                    T[r+k][r-k-1-j]='*';
                }
                T[r+k][r+k]='*';
                for(int j=1;j+k<r;j++)
                {
                    T[r+k+j][r+k]='*';
                }
            }
            for(int i=0;i<2*r;i++)
            {
                for(int j=0;j<2*r;j++)
                {
                    cout<<T[i][j];
                }
                cout<<endl;
            }
        }
};

int main()
{
    int r;
    while(true)
    {
        cin>>r;
        if (r>0)
        {
            Lewy obj(r);
            Wiatrak *wsk = &obj;
            wsk->rysuj();
        }
        else if (r<0)
        {
            Prawy obj(-r);
            Wiatrak *wsk = &obj;
            wsk->rysuj();
        }
        else break;
    }
    return 0;
}
