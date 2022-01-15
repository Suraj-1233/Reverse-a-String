#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     string s;
      cin>>s;
       int l=0,h=s.size()-1;
       while(l<=h)
       {
           swap(s[l],s[h]);
           l++;
           h--;
       }
  cout<<s<<endl;


 }