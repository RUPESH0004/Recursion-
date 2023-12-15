#include<iostream>
using namespace std;
int fibo(int n)
{
  if (n<=1)
  return n;
  else 
  {
    return fibo(n-1)+fibo(n-2);
  }
}
int main ()
{
int n;

    cout << "Enter the value of n for Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " terms: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << fibo(i) << " ";
    }

    return 0;
}