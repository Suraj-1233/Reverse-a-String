#include<bits/stdc++.h>
using namespace std;
  vector <int> search(string pat, string txt)
        {
            //code here.
            int i = 0;
            int j = 0;
            int n = txt.size();
            int windowSize = pat.size();
            vector<int> ans;
            while (j<n)
            {
              if(j-i+1 == windowSize){
                  bool flag = true;
                 
                  for(int ind = i,k=0;ind <= j;ind++,k++){
                      
                    if(pat[k] !=txt[ind] ){
                      flag = false;
                      break;
                    }
                  }
                  if(flag) ans.push_back(i+1);
                  i++;
              }
              j++;
            }
           return ans; 
            
        }
 
 
int main()
{
  string txt ,pat;
  cin>>txt>>pat;
  vector<int> ans;
  ans = search(pat,txt);
  for(auto it:ans){
    cout<<it<<" ";
  }
  return 0;
}