#include<iostream>
using namespace std;
class fibo
{
public:
    int n;
    int fiboniciserise()
    {

        int a=0;
        int b=1;
        int nextTerm=0;

        for(int i=0;i<n;i++)
        {
            cout<<nextTerm<<endl;
            a=b;
            b= nextTerm;
             nextTerm=a+b;

        }
    }
};
int main()
{
    fibo a;
    a.n=10;
    a.fiboniciserise();
}
