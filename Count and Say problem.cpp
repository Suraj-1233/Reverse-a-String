#include<bits/stdc++.h>
using namespace std;
 int main()
 {
      int n;
       cin>>n;
        string s;
        if(n==1)
           {
               s="1";
               cout<<s<<endl;
               return 0;
           }
           if(n==2)
           {
               s="11";
               cout<<s<<endl;
               return 0;
           }


           s="11";
           
for(int i=3;i<n+1;i++)
   {
       // cout<<"ff"<<endl;
       cout<<"i--->"<<i<<endl;
        string Temp_string="";
         int c=1;
     for(int j=1;j<s.size();j++)
     {   
         if(s[j-1]==s[j])
         {
             c++;
             cout<<"c"<<"-->"<<c<<endl; 
         }
         else
         {
             Temp_string=Temp_string+char(c+48)+s[j-1];
             cout<<"Temp is --->"<<Temp_string<<endl;
             c=1;
             
         }
     }

      Temp_string+=(c+48);
      Temp_string+=s[s.size()-1];
      s.clear();
     s=Temp_string;
 //cout<<s<<endl;
   }

  cout<<s<<endl;
 }