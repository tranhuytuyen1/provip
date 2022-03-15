#include<iostream>
using namespace std;

int main(){
	float a,b,c,d;
	do{
	cout<<"\n nhap diem bai kiem tra "<<endl;
	cin>>a;
	}while(a<0||a>10);
	do{
	cout<<"\n nhap diem thi giua ky "<<endl;
	cin>>b;
	}while(b<0||b>10);
	do{
	cout<<"\n nhap diem thi cuoi ky "<<endl;
	cin>>c;
	}while(c<0||c>10);
	cout<<"\n diem trung binh la "<<(a+b+c)/3<<endl;
	if(d>=9.0){
		cout<<"\n hang A"<<endl;
	}else if(d>=7.0||d<9.0){
		cout<<"\n hang B"<<endl;
	}else if(d>=5.0||d<7.0){
		cout<<"\n hang C"<<endl;
	}else{
		cout<<"\n hang F"<<endl;
	}
	return 0;
}	


