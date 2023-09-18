#include<iostream>
using namespace std;
class maxdigit
{
public:
    int n;
    int findmaxdigit()
    {
        int max=0;
        while(n!=0)
        {
           int  rem=n%10;
            if(rem>max)
                max=rem;
            n=n/10;
        }
        cout<<"highest value digit is "<<max<<endl;
    }

};
int main()
{
    maxdigit a;
    cout<<"inter a number"<<endl;
    cin>>a.n;
    a.findmaxdigit();
    return 0;
}
