#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
 string removeKdigits(string num, int k) {
        //monotonic stack 
         vector<char> st;
         for(auto i:num)
         {
             while(st.size() && st.back()>i && k)
             {
                 st.pop_back();
                 k--;
             }
             st.push_back(i);
         }

         while(k--)
         {
             st.pop_back();
         }
         string ans="";
         for(auto i:st)
         {
             if(ans.size()==0 && i=='0')
             continue;
             ans+=i;
         }
         return ans.size()==0?"0":ans;
         
    }
int main()
{
   string s="Hello World!!";
   for(auto i:s)
   {
       cout<<i;
       if(i==' ')
       cout<<'\n';
   }
   return 0;
}