#include<iostream>
using namespace std;
void nhap_mang(int array[] , int n){
	for(int index=0;index<n;index++){
		cout<<"array["<<index+1<<"]=";
		cin>>array[index];
		cout<<endl;
	}
}
void xuat_mang(int array[],int n){
	for(int index=0;index<n;index++){
		cout<<"array["<<index+1<<"]="<<array[index];
		cout<<endl;	
	}
}
void sap_xep_tang_dan(int array[],int n){
	cout<<"sap xep tang dan "<<endl;
	for(int index=0;index<n;index++){
			cout<<array[index]<<endl;
		}
	}
int main(){
	int n;
	do{
		cout<<"\nnhap so phan tu trong mang"<<endl;
	cin>>n;	
	if(n<0 || n>100){
		cout<<"\nsai roi b oi ko so am dc "<<endl;
		cout<<"\n kem the nhi"<<endl;
	}
	}while(n<0||n>100);
	int array[n];
	nhap_mang(array,n);
	xuat_mang(array,n);
	sap_xep_tang_dan(array,n);

}



