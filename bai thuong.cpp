#include<iostream>
using namespace std;
void nhap_mang(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"]=";
		cin>>a[i];
		cout<<endl;
	}
	
}
void xuat_mang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"]="<<a[i];
		cout<<endl;
	}
}
void tinh_trungbinh(int a[], int n ){
    sum=0;
	cout<<"\ntong trung binh cong cua cac phan tu trong mang la : ";
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	 tb=float(sum/n);
	cout<<tb<<endl;
}
void tinh_tong_ptl_vtrc(int a[],int n){
	  s=0;
	cout<<"\ntong trung binh cong cua phan tu le trong vi tri chan la :";
	for(int i=0;i<n;i++){
		if(a[i]%2 !=0||i%2 ==1){
			s+=a[i];
		}
	}
	 tbl=float(s/n);
	cout<<tbl<<endl;
}
int main(){
		int n,sum,s;
		float  tb,tbl;
		cout<<"nhap so phan tu trong mang "<<endl;
		do{
		cin>>n;
		if(n<0||n>100){
			cout<<"\nnhap sai roi b oi "<<endl;
			cout<<"\nnhap lai di "<<endl;
		}
		}while(n<0);
		int a[n];
		nhap_mang(a,n);
		xuat_mang(a,n);
		tinh_trungbinh(a,n);
		tinh_tong_ptl_vtrc(a,n);

}

