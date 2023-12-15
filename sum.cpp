#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0||n==1)
    return 1;
    else 
    {
        return n+sum(n-1);
    }
}
int main()
{
int n;
cout<<"please Enter the no for factorial"<<endl;
cin>>n;
int ans = sum(n);
cout<<ans; 
}