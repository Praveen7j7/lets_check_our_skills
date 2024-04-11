#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==0 || n==1)
    return 1;

    return factorial(n-1)*n;
}
int nCr(int n, int r)
{
    
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
    cout<<nCr(5,2);
   return 0;
}