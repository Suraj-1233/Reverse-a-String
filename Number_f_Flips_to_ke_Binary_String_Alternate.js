const prompt=require("prompt-sync")();
 

let s;
s=prompt(" enter your string :- ");

var c1=0,c2=0;
for(let i=0;i<s.length;i++)
{
    if((i&1 && s[i]=='0') ||(i%2==0 && s[i]=='1'))
       c1++; 
       if((i&1 && s[i]=='1') ||(i%2==0 && s[i]=='0'))
        c2++;



}
  if(c1>c2)
  c1=c2;

console.log(c1);

