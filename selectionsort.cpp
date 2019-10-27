#include <iostream>
using namespace std;

int main() 
{ 
int temp,i,j;
int a[5]={4,6,3,1,9};
for(i=0;i<5;i++)
{
 for(j=i;j<5;j++)
{
 if(a[j]<a[i])
 {temp=a[i];
 a[i]=a[j];
 a[j]=temp;}
 }
 }
  
 cout<<"sorted array is"<<"\n";
 for(i=0;i<5;i++)
 {
  cout<<a[i]<<"\n";
 }
  
    return 0;
}    
