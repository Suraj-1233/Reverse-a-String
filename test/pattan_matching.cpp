#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
     cin>>s>>p;
      int i=0,S_size=s.size(),P_size=p.size();
       int j=0,count=0;
        bool result=true;
        vector<int> Arry;
      while(i<S_size)
      {
            if(count==P_size)
            {
                Arry.push_back(i-P_size);
               // cout<<" yes"<<endl;
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
          if(j>=P_size)
          {j=0;}
      }
            if(count==P_size)
            {
               // cout<<" yes"<<endl;
                result=false;
                Arry.push_back(S_size-P_size);
               
            }

 if(result) cout<<"NO"<<endl;
 else{
     for(int i=0;i<Arry.size();i++)
       cout<<Arry[i]<<endl;
 }

}