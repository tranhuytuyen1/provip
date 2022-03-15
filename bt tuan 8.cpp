#include<iostream>
#include<iomanip>
#include <string>
#include <conio.h> 
using namespace std;
struct cauthu{
	char ma_ct[15];
	char ten_ct[30];
	int age;
	char vi_tri[15];
	int ban_thang;
};
void nhap(cauthu ct[],int n ){
	for(int i=0 ;i<n;i++){
		cout<<"\n\tcau thu so :" <<i+1<<endl;
		cin.ignore();
		cout<<"\n\tnhap ma ct :";
		cin.getline(ct[i].ma_ct, 15);
		cout<<"\n\tnhap ten ct :";
		cin.getline(ct[i].ten_ct, 30);
		cout<<"\n\tnhap so tuoi ct :";
		cin>>ct[i].age;
		cin.ignore();
		cout<<"\n\tnhap vi tri ct :";
		cin.getline(ct[i].vi_tri, 15 );
		cout<<"\n\tnhao so ban thang :";
		cin>>ct[i].ban_thang;
	}
}
void tieu_de(){
	cout<<setw(16)<<"ma";
	cout<<setw(31)<<"ten";
	cout<<setw(15)<<"age";
	cout<<setw(16)<<"vi tri ";
	cout<<setw(20)<<"ban thang "<<endl;
}
void xuat(cauthu ct[], int n ){
	tieu_de();
	for(int i=0;i<n;i++){
	cout<<setw(16)<<ct[i].ma_ct;
	cout<<setw(31)<<ct[i].ten_ct;
	cout<<setw(15)<<ct[i].age;
	cout<<setw(16)<<ct[i].vi_tri;
	cout<<setw(20)<<ct[i].ban_thang<<endl;
	}
}
void tim_kiem(cauthu ct[],int n){
	cout<<"tim ct "<<endl;
	char k[15]="vu thanh dat ";
 tieu_de();
	for ( int  i  =  0 ;  i  <  n ;  i ++ ){
		if( (k,ct[i].ten_ct)==0){	
	      cout<<"\n co vu thanh dat trong mang "<<endl;
	}else{
		cout<<"\n ko co vu thanh dat "<<endl;
	}
	}
}
void Dtv(cauthu ct[],int n){
	cout<<" so luong cau thu tien ve "<<endl;
	int dem=0;
	for(int i=0;i<n;i++){
		if(ct[i].vi_tri=="tien ve"){
			cout<<"so cau thu choi o vi tri tien ve "<<endl;
			dem++;
		}else{
			cout<<"ko co cau thu choi o vi tri tien ve "<<endl;
		}
	}
}
void ttln(cauthu ct[],int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(ct[i].age>max){
	      max=ct[i].age;
		}
	}
	cout<<"la so tuoi lon nhat trong doi bong "<<max<<endl;
}
void sx(cauthu ct[],int n){
	cout<<"sap xep "<<endl;
	int tg;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ct[i].ban_thang<ct[j].ban_thang){
				tg=ct[i].ban_thang;
				ct[i].ban_thang=ct[j].ban_thang;
				ct[j].ban_thang=tg;
			}
		}
	}
}
int main(){
int n;
cout<<"\nnhap so luong ct "<<endl;
do{
	cin>>n;
	if(n<0||n>10){
		cout<<"\nnhap sai r b oi hehe!!<<";
	}
}while(n<0||n>10);
cauthu ct[n];
nhap(ct,n);
xuat(ct,n);
tim_kiem(ct,n);
Dtv(ct,n);
ttln(ct,n);
sx(ct,n);

}

