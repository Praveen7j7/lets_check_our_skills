#include <iostream>
using namespace std;
#include<string>
#include <ctype.h>
#include <algorithm>
#include <cctype>
int main()
{
   string atr="Hello";
   
 if(isupper(atr[0]))
   cout<<"Yes";
   else
   cout<<"No";
   return 0;
}