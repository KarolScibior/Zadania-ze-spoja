#include <iostream>

using namespace std;

class Wiatrak
{
    public:
        Wiatrak(int x=0, int y=0)
        {
            rysuj(x,y);
        }
        void rysuj(int x, int y);
};

void Wiatrak::rysuj(int x, int y)
{
    char T[100][100];
    for(int i=0;i<2*y;i++)
    {
        for(int j=0;j<2*y;j++)
        {
            T[i][j]='.';
        }
    }
    if(x>0)
    {
        for(int i=0,k=0;i<y;i++,k++)
        {
            T[y-k-1][y-k-1]='*';
            for(int j=1;j+k<y;j++)
            {
                T[y-k-1][y-k-1-j]='*';
            }
            T[y-k-1][y+k]='*';
            for(int j=1;j+k<y;j++)
            {
                T[y-k-1-j][y+k]='*';
            }
            T[y+k][y-k-1]='*';
            for(int j=1;j+k<y;j++)
            {
                T[y+k+j][y-k-1]='*';
            }
            T[y+k][y+k]='*';
            for(int j=1;j+k<y;j++)
            {
                T[y+k][y+k+j]='*';
            }
        }
    }
    if(x<0)
    {
        for(int i=0,k=0;i<y;i++,k++)
        {
            T[y-k-1][y-k-1]='*';
            for(int j=1;j+k<y;j++)
            {
                T[y-k-1-j][y-k-1]='*';
            }
            T[y-k-1][y+k]='*';
            for(int j=1;j+k<y;j++)
            {
                T[y-k-1][y+k+j]='*';
            }
            T[y+k][y-k-1]='*';
            for(int j=1;j+k<y;j++)
            {
                T[y+k][y-k-1-j]='*';
            }
            T[y+k][y+k]='*';
            for(int j=1;j+k<y;j++)
            {
                T[y+k+j][y+k]='*';
            }
        }
    }

    for(int i=0;i<2*y;i++)
    {
        for(int j=0;j<2*y;j++)
        {
            cout<<T[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    int r;
    while(true)
    {
        cin>>r;
        if(r==0) break;
        if (r>0) Wiatrak obj(r,r);
        if (r<0) Wiatrak obj(r,-r);
    }
    return 0;
}
