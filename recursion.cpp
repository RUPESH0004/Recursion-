#include<iostream>
using namespace std ;
  int sumOfNo(int n)
{
    if (n==0)
    {
        return 0;

    }
    else
    {
        return n*sumOfNo(n-1);
    }


}
int main ()
{
  

}