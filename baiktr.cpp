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
void sap_xep_chan(int array[],int n){
	cout<<"chan giam dan "<<endl;
	for(int index=n-1;index>=0;index--){
		if(array[index]%2==0){
			cout<<array[index]<<endl;
		}
	}
}
void sap_xep_le(int array[],int n){
	cout<<"le tang dan "<<endl;
	for(int index=0;index<n;index++){
			if(array[index]%2!=0){
				cout<<array[index]<<endl;
			}
	}
}
void dem_phan_tu(int array[],int n,int dem ){
	dem=0; 
	for(int index=0;index<dem;index++){
		array[1]=0;
		for(int index=0;index<n;index++){
			array[index]++
}
	}
    for(int index=0;index<dem;index++){
    	if(array[1]>0){
    		cout<<"gia tri "<<index<<"xuat hien "<<array[]
		}
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
	sap_xep_chan(array,n);
	sap_xep_le(array,n);

}

