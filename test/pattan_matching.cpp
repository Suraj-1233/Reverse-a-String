


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
     cin>>s>>p;
      int i=0,S_size=s.size(),P_size=p.size();
       int j=0,count=0;
        bool result=true;
      while(i<S_size)
      {
            if(count==P_size)
            {
                cout<<" yes"<<endl;
                result=false;
                count=0;
            }

          if(s[i]==p[j])
          {
              i++;
              j++;
              count++;
          }
          else
          {
              i++;
               count=0;
               j=0;
          }
      }
      if(count==P_size)
            {
                cout<<" yes"<<endl;
                result=false;
               
            }

 if(result) cout<<"NO"<<endl;

}