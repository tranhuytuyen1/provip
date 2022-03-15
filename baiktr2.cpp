#include<iostream>
// 84 tran Huy Tuyên 
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
void sap_xep_giam_dan(int array[],int n){
	cout<<"thu tu giam dan  "<<endl;
	for(int index=n-1;index>=0;index--){
				cout<<array[index]<<endl;		
	}
}
void tinhtb(int a[], int n){
    float tb, tong=0;
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]%5==0){
            tong=tong+a[i];
            dem++;
}
 }
    if(dem==0){
        return 0;
        }
    else
        {
            tb=tong/dem;
            return tb;
        }
}

int main(){
	int n;
	int dem;
	float tb,tong=0;
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
	sap_xep_giam_dan(array,n);
	tinhtb(array,n);

}

