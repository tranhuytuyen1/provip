#include<iostream>
using namespace std;

int main(){
	int n;
	do{
	cout<<"\n nhap phan tu  luong mang "<<endl;
	cin>>n;
	if(n<0){
		cout<<" phan tu ko co am nham lai di b oi "<<endl;
	}
	}while(n<0);
	int array[n];
	for(int index=0 ;index<n;index++){
		cout<<"\n thu tu cua mang "<<index+1<<endl;
		cin>>array[index];
	}
	for(int index=0; index<n;index++){
		cout<<"\n trong mang co  "<<array[index]<<endl;
	}
	cout<<"\n trung binh cong cac so chan"<<endl;
	double s = 0;	
	int	dem =0;
	for(int index=0; index<n;index++){
		if(array[index]%2 == 0){
			dem++;
			s += array[index];
		}
	}
	cout<<s/double(dem)<<endl;
	int max;
	cout<<"\nham so sau khi xem tang dan"<<endl;
	for(int index=0;index<n;index++){
		for(int j=index+1;j<n;j++){
			if(array[index]>array[j]){
				max = array[index];
				array[index]=array[j];
				array[j]=max ;				
				}
			
		}
	}
	for(int index=0;index<n;index++)
	cout<<array[index]<<endl;
	cout<<"\nham so sau khi giam dan"<<endl;
	for(int index=0;index<n;index++){
		for(int j=index+1;j<n;j++){
			if(array[index]<array[j]){
				array[index]=max;
				array[index]=array[j];
				array[j]=max;
			}
		}
	}
	for(int index=0;index<n;index++)
	cout<<array[index]<<endl;
	cout<<"\n cac phan tu so am trong mang"<<endl;
	for(int index=0;index<n;index++){
		if(array[index]<0){
			cout<<array[index]<<endl;
		}
	}
	cout<<"so ching phong la"<<endl;
	for(int index=0;index<n;index++){
		for(int y=0;y<array[index];y++){
			if(y*y == array[index])
			cout<<array[index]<<endl;
		}
	}
		
}

