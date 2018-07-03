#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Punkt
{
    public:
        string nazwa;
        int x, y;
        float z;

        void policz()
        {
            z=(float)sqrt(x*x+y*y);
        }
};

bool sortuj(const Punkt &obj1, const Punkt &obj2)
{
    return  obj1.z<obj2.z;
}

int main()
{
    int t, n, a, b;
    string c;
    vector <Punkt> wektor;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>c>>a>>b;
            wektor.push_back(Punkt());
            wektor[i].nazwa=c;
            wektor[i].x=a;
            wektor[i].y=b;
            wektor[i].policz();
        }

        sort(wektor.begin(),wektor.end(),sortuj);

        for(int i=0;i<n;i++)
        {
            cout<<wektor[i].nazwa<<" "<<wektor[i].x<<" "<<wektor[i].y<<endl;
        }

        wektor.clear();
        cout<<endl;
    }
    return 0;
}
