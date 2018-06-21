#include <iostream>

using namespace std;

int main()
{
    int D, N, a, b, d=0, s=0, dir1, steps1, dir2, steps2;
    cin>>D;
    for(int i=0;i<D;i++)
    {
        cin>>N;
        for(int j=0;j<N;j++)
        {
            cin>>a>>b;
            if (a==0) d+=b;
            if (a==1) d-=b;
            if (a==2) s+=b;
            if (a==3) s-=b;
        }
        if (d == 0 && s == 0)
		{
			cout << "studnia" << endl;
			continue;
		}
		if (d > 0)
		{
			dir1 = 0;
			steps1 = d;
		}
		else
		{
			dir1 = 1;
			steps1 = -d;
		}
		if (s > 0)
		{
			dir2 = 2;
			steps2 = s;
		}
		else
		{
			dir2 = 3;
			steps2 = -s;
		}
		if(steps1 == 0) cout<<dir2<<" "<<steps2<<endl;
		else if(steps2 == 0) cout<<dir1<<" "<<steps1<<endl;
		else cout<<dir1<<" "<<steps1<<"\n"<<dir2<<" "<<steps2<<endl;
		d=0;
		s=0;
    }
    return 0;
}
