#include <iostream>
#include<string>
using namespace std;
int main()
{  int a;
   cin>>a;
   string s,s1;
for (int k=0;k<a;k++)
{int b;
   cin>>b;
   int c[b];
   for (int i=0;i<b;i++)
   {cin>>c[i];} 
  int max=c[0];
  int peaks = 0;
  if(b==1)
  {string s=to_string(k+1);
  string s1=to_string(peaks+1);
  cout<<"Case #"<<s<<": "<<s1;
  continue;}
  
  if(c[0]>c[1]){
      peaks=peaks+1;}
  for(int i = 1; i < b; i++) {
    if(i!=b-1){
      
     if(max < c[i] && c[i+1] < c[i]) {
        peaks++;}
        if (max<c[i]){max=c[i];}
     }
    else{
     if(max < c[i]) {
        peaks++;}
     }
  }
  string s=to_string(k+1);
  string s1=to_string(peaks);
  
  cout<<"Case #"<<s<<": "<<s1;

} 
 return 0;
}
