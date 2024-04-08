#include <iostream>
using namespace std;
#include<string>
int main()
{
    char str='H', d='h';
    // cout<<str.substr(2)<<endl;
    // cout<<((d-'0')-(str-'0'))<<endl;
    cout<<abs((str-'0')-(d-'0'))<<endl;
    // cout<<str;
    if(isupper(str))
    cout<<"Yes";
    else
    cout<<"No";
    cout<<endl;
   
   return 0;
}