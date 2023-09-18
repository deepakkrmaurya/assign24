#include<iostream>
using namespace std;
class power
{
public:
    int x,y;
    int xpowery()
    {
        int result=1;
        while(y!=0)
        {
            y--;
            result =result*x;
        }
        cout<<"x power y is "<<result<<endl;
    }
};
int main()
{
     power a;
     cout<<"inter the x power y "<<endl;
     cin>>a.x>>a.y;
     a.xpowery();
     return 0;
}
