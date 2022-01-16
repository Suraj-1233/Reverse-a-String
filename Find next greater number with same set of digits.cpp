#include<bits/stdc++.h>
using namespace std;
int main()
{
   int Arry_size;
    cin>>Arry_size;
     vector<int>Arry;
     int data;
      bool result=true;
      for(int i=0;i<Arry_size;i++)
         {
             cin>>data;
              Arry.push_back(data);

         }
         for(int i=Arry_size-1;i>0;i++)
         {
             if(Arry[i]>Arry[i-1])
             {
                 result=false;
                 swap(Arry[i-1],*Arry.end());
                 //sort(Arry[i],Arry[Arry_size-1]);
                 break;
             }
         }
   if(result==true)
   {
      // reverse(Arry,size);
   }

         for(int i=0;i<Arry_size;i++)
           cout<<Arry[i]<<" ";




}