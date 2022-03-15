#include<iostream>
using namespace std;

int main(){
	int n;
	do{
	cout<<"\nnhap so luong mang : "<<endl;
	cin>>n;
	if(n<0){
	cout<<"\n sai roi b oi "<<endl;
	}
	}while(n<0);
	int array[n];
	for(int index=0;index<n;index++){
		cout<<"array["<<index+1<<"]="<<endl;
		cin>>array[index];
	}
	for(int index=0;index<n;index++){
		cout<<"array["<<index+1<<"]="<<array[index]<<endl;
	}
	cout<<"cac so chan am trong mang"<<endl;
	for(int index=0;index<n;index++){
		if(array[index]<0&&array[index] % 2==0)
		cout<<"a["<<index+1<<"]="<<array[index]<<endl;
	}

}

