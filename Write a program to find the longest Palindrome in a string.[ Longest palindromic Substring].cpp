#include<bits/stdc++.h>
using namespace std;
 int l,idx,len;
void get_line(string &s,int c1,int c2)
  {
     int n=s.size();
     while(c1>=0&&c2<n&&s[c1]==s[c2])
     {
          l=c2-c1+1;
          if(l>len)
          {
              len=l;
              idx=c1;
          }
          c1--;
          c2++;
     }
  }

string longest(string s)
{
    int n=s.size();
      for(int i=0;i<n;i++)
      {
          get_line(s,i,i);
          get_line(s,i,i+1);

      }
      return s.substr(idx,len);
}



 int main()
 {
    string s;
    cin>>s;
     s=longest(s);
      cout<<s<<endl;


 }





























// #include<bits/stdc++.h>
// using namespace std;
//   int d[1001][1001];

// int sol(string s,int i,int j)
//   {
     
//       if(i==j)
//      return 1;
//         if(i>j)
//        return 0;
//        if(d[i][j]!=-1)
//        {
          
//            return d[i][j];
//        }
//        if(s[i]==s[j])
//        {
//            //cout<<"g"<<endl;
//            return d[i][j]=sol(s,i+1,j--)+2;
//        }
//        else
//        {
//            return d[i][j]=max(sol(s,i+1,j),sol(s,i,j--));
//        }
      


// return 0;
//   }





//  int main()
//  {
//       memset(d, -1, sizeof(d));
//    string s;
//    cin>>s;
  
//     int a=sol(s,0,s.size()-1);
//      cout<<a<<endl;






//  }