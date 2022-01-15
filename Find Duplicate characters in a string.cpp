#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
     getline(cin,s);
      // using hashmap
       
      int ary[128]={0};
         for(int i=0;i<s.size();i++)
         {
            ary[int(s[i])]++;
         }

         for(int i=0;i<128;i++)
         {
             if(ary[i]>1)
             {
                 cout<<char(i)<<" --->"<<ary[i]<<endl;
             }
         }


 





}