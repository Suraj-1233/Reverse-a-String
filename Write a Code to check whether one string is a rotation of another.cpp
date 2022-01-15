#include<bits/stdc++.h>
using namespace  std;
 int main()
 {
   string s1,s2;
    cin>>s1;
     cin>>s2;
      int s=s1.size();
      s1+=s1;
       bool a=true;
      for(int i=0;i<s+1;i++)
      {
          if(s1.substr(i,s)==s2)
          { 
               a=false;
              cout<<" YES"<<endl;
              return 0;
          }


      }
      if(a)
  cout<<"NO"<<endl;


 }