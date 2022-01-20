#include<bits/stdc++.h>
using namespace std;
#define dif 101;
void matching( string s,string p,vector<int> &arry)
{
   
      int i=0,S_size=s.size(),P_size=p.size();
       int j=0,count=0;
        
       
      while(i<S_size)
      {
            if(count==P_size)
            {
                Arry.push_back(i-P_size);
               
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
             break;
          }
          if(j>=P_size())
          {
              j=0;
          }
         
      }
            if(count==P_size)
            {
               
                result=false;
                Arry.push_back(S_size-P_size);
               
            }

 
 }


int hash_1( string s)
{
    int ans=0;
     for(int i=0;i<s.size();i++)
     {
           ans+=(s[i]-'a')*pow(dif,i);
     }

  return ans;
}





int main()
{
    string s1,s2;
     cin>>s1>>s2;
     S1_size=s1.size();
     S2_size=s1.size();
     for(int i=0;i<S1_size-S2_size;i++)
     {
          string stk=su

     }
}