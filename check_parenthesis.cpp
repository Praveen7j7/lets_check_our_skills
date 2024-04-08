#include <iostream>
#include<stack>
using namespace std;
int main()
{
   //brute force solution 
stack<char> s;
char a[10];
cin>>a;
for(int i=0;a[i]!='\0';i++)
{
    if(a[i]=='(' )
    s.push(a[i]);
    else if(a[i]==')')
    {
        if(s.empty())
        {
            // cout<<"No";
            return 0;
        }
        s.pop();
    }
    if(s.empty())
    cout<<"Yes";
    else
    cout<<"No";
}
   return 0;
}