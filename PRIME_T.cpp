#include<iostream>
#include<cstdlib>
using namespace std;

class pierwsza
{
    public:
        pierwsza(int m)
        {
            if(czy(m)) cout<<"TAK"<<endl;
            else cout<<"NIE"<<endl;
        }
        bool czy(int m);
};

bool pierwsza::czy(int n)
{
	if(n<2)
		return false;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}

int main()
{
	int n, m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
        cin>>m;
        pierwsza obj(m);
	}
	return 0;
}
