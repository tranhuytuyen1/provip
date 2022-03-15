#include<iostream>
using namespace std;

int main(){
       int tuoi;
       do{
       	cout<<"\n nhap so tuoi hoc sinh "<<endl;
	  cin>> tuoi;  
	   }while(tuoi<=0|| tuoi>100);
	   if(tuoi<6){
	   	cout<<"\n hs mam non"<<endl;
	   }else if(tuoi<9){
	   	cout<<"\n hs cap 1"<<endl;
	   }else if(tuoi<16){
	   	cout<<"\n hs cap 2"<<endl;
	   }else if(tuoi<19) {
	   	cout<<"\n hs cap 3"<<endl;
	   }else{
	   	cout<<"\n di lam"<<endl;
	   }
      cout<<"goodbye"<<endl;
}

