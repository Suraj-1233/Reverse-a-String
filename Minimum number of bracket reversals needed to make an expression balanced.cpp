#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    string s;
     cin>>s;
     if(s.size()%2!=0)
     {
         cout<<-1<<endl;
     }
     else
     {
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
            if((stk.top()=='}'&&k=='{'))
            {
            stk.pop();
            stk.pop();
            }

         }
     }
int ans=stk.size();
ans=ans-2;

 if(ans%2==0)
   cout<<(ans/2)+2<<endl;
   else
   cout<<-1<<endl;

     }


 }