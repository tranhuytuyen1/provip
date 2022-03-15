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
void tinh_tong(int array[],int n,int s1){
	 s1= 0;
	cout<<"tong phan tu trong mang "<<endl;
	for(int index=0;index<n;index++){
		s1+=array[index];
	}	
	cout<<s1<<endl;
}
void tong_chan(int array[],int n,int s2){
	 s2=0;
	cout<<"tong phan tu chan trong mang"<<endl;
	for(int index=0;index<n;index++ ){
		if(array[index]%2 == 0){
		s2+=array[index];
		}
	}
	cout<<s2<<endl;
}
void tong_le(int array[],int n,int s3 ){
	 s3=0;
	cout<<"tong phan tu le trong mang "<<endl;
	for(int index=0;index<n;index++){
		if(array[index]%2 != 0){
			s3+=array[index];
		}
		cout<<s3<<endl;
		
	}
}
void tim_chan(int array[],int n  ){
	cout<<"tim phan tu chan dau tien trong mang "<<endl;
	for(int index=0;index<n;index++){
		if(array[index]%2==0){
			cout<<array[index];
			cout<<"\t";
		break;
		}
	}
	cout<<endl;
}
void tim_le(int array[],int n ){
	cout<<"tim so le dau tien trong mang"<<endl;
	for(int index=0;index<n;index++){
		if(array[index]%2 !=0){
			cout<<array[index];
			cout<<"\t";
			break;
		}
	}
	cout<<endl;
}
void tim_chanc(int array[],int n ){
	cout<<"tim so chan cuoi cung trong mang"<<endl;
	for(int index=n-1;index>0;index--){
		if(array[index]%2==0){
			cout<<array[index];
			cout<<"\t";
		}
		cout<<endl;
	}
}
void lon_nhat(int array[],int n , int max){
	max=0;
	cout<<"tim pham tu lon nhat trong mang la "<<endl;
	for(int index=0;index<n;index++){
		if(array[index]>max){
			max=array[index];
			cout<<max<<endl;
		}
	}
}
void dem_so_chan(int array[], int n , int dem){
	dem=0;
	cout<<"dem so phan chan trong mang la :"<<endl;
	for(int index=0;index<n;index++){
	if( array[index] % 2 ==0){
		dem=dem+1;
		cout<<dem<<endl;
	}
}
}
void dao(int array[], int n ){
	cout<<"dao nguoc mang"<<endl;
	for(int index=0;index<n/2;index++){
		int tg=array[index];
		array[index]=array[n-1-index];
		array[n-1-index]=tg;	
	}
	for(int index=0;index<n;index++){
		cout<<array[index]<<"\t";
	}
}

int main(){
	int n,s1,s2,s3;
	int max,dem,tg;
	do{
		cout<<"\nnhap so phan tu trong mang"<<endl;
	cin>>n;	
	if(n<0||n>100){
		cout<<"\nsai roi b oi ko so am dc "<<endl;
		cout<<"\n kem the nhi"<<endl;
	}
	}while(n<0);
	int array[n];
	nhap_mang(array , n );
	xuat_mang(array , n );
	tinh_tong(array , n , s1);
	tong_chan(array , n , s2);
	tong_le(array, n , s3);
	tim_chan(array,n );
	tim_le(array , n );
	tim_chanc(array , n);
	lon_nhat(array ,n , max);
	dem_so_chan(array, n , dem);
	dao(array,n);
}

