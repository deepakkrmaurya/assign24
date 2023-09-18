#include<iostream>
using namespace std;
void swap(int *p ,int *q)
{
    int temp=*q;
    *q=*p;
    *p=temp;

}
int main()
{
    int x=5 , y=10;
    swap(&x,&y);
    cout<<"swap x :"<<x<<" and y: "<<y;
    return 0;
}
