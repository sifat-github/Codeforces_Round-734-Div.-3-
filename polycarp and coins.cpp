#include<iostream>
using namespace std;
int main()
{
    int t,n,c1,c2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%3==1)
        {
           c1 = (n/3)+1;
           c2 = n/3;
           cout<<c1<<" "<<c2<<endl;
        }else if(n%3==2)
        {
           c1 = (n/3);
           c2 = (n/3)+1;
           cout<<c1<<" "<<c2<<endl;
        }else if(n%3==0)
        {
           c1 = n/3;
           c2 = n/3;
           cout<<c1<<" "<<c2<<endl;
        }
    }
}
