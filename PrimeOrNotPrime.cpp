#include<iostream>
using namespace std;
class primenumber
{
public:
    int n;
    int checkprimenumber()
    {
        int flage=0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flage=1;
                break;
            }
        }
        if(flage==0)
        {
            cout<<"Number is prime";
        }
        else
            cout<<"Number is not prime";
    }
};
int main()
{
    primenumber a;
    cout<<"inter a number";
    cin>>a.n;
    a.checkprimenumber();
}
