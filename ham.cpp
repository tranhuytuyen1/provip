#include<iostream>
using namespace std;
void nhap (int a[],int n){
	for(int index=0;index<n;index++){
	
	cout<<"a["<<index+1<<"]=";
	cin>>a[index];
	cout<<endl;
}
}
void xuat (int a[],int n){
	for(int index=0;index<n;index++){
	cout<<"a["<<index+1<<"]="<<a[index];
	cout<<endl;
}
}

int main(){
 int n;
 cout<<"nhap so luong mang ";
 cin>>n;
 int a[n];
 nhap (a , n);
 xuat (a , n);
}

