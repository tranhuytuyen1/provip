#include<iostream>
using namespace std; 
  
int main(int argc, char *argv[]) 
{ 
      int a,b,c,max;

     cin>>a>>b>>c;

     max=a; //Gia su gia tri dau tien la lon nhat

   if(max<b) max=b; // So sanh max voi b va cap nhat gia tri lon nhat nay

   if(max<c) max=c; //So sanh max voi c va cap nhat gia tri lon nhat nay

   cout<<"Gia tri lon nhat cua ba so la: "<<max; //Ket qua
    
   
   return 0; 
}
