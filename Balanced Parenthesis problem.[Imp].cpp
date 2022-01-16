#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    string s;
     cin>>s;
     stack<int>stk;
     char k=s[0];
     for(int i=0;i<s.size();i++)
     {
         if(stk.size()>0) 
         {
         k=stk.top();
         }
        
         stk.push(s[i]);
         if(stk.size()>1)
         {
            if((stk.top()==')'&&k=='(')||(stk.top()=='}'&&k=='{')||(stk.top()==']'&&k=='['))
            {
            stk.pop();
            stk.pop();
            }

         }
     }

if(stk.size()==0)
   cout<<"yes"<<endl;
   else
   cout<<"no"<<endl;




 }