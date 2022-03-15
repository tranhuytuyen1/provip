//bai2
//tran huy tuyen 15a22
#include<iostream>
#include<iomanip>
using namespace std;
struct sinhvien{
	char ma_sv[8],ho_ten[30],age[10];
	float dt,dl,dh,dtb;
};
void nhap(sinhvien sv[],int &n){
	for(int i=0;i<n;i++){
	cout<<"\n\tsinh vien thu  :"<<i+1<<endl;
	cin.ignore();
	cout<<"\n\tnhap ma sv :";
	cin.getline(sv[i].ma_sv,8);
	cout<<"\n\tnhap ten sv :";
	cin.getline(sv[i].ho_ten,30);
	cout<<"\n\tnhap age :";
	cin.getline(sv[i].age,10);
	cout<<"\n\tnhap diem toan :";
	do{
		cin>>sv[i].dt;
		if(sv[i].dt<0||sv[i].dt>10){
			cout<<"\n\tnhap lai diem toan!\n";
		}
	}while(sv[i].dt<0||sv[i].dt>10);
	cout<<"\n\tnhap diem ly :";
	do{
		cin>>sv[i].dl;
		if(sv[i].dl<0||sv[i].dl>10){
			cout<<"\n\tnhap lai diem ly :";
		}
	}while(sv[i].dl<0||sv[i].dl>10);
	cout<<"\n\tnhap diem hoa";
	do{
		cin>>sv[i].dh;
		if(sv[i].dh<0||sv[i].dh>10){
			cout<<"\nnhap lai diem hoa!\n";
		}
	}while(sv[i].dh<0||sv[i].dh>10);
}
}
void tieu_de(){
	cout<<setw(11)<<"ma |";
	cout<<setw(15)<<"ten |";
	cout<<setw(11)<<"age |";
	cout<<setw(11)<<"diem toan |";
	cout<<setw(11)<<"diem ly |";
	cout<<setw(11)<<"diem hoa |";
	cout<<setw(15)<<"dtb|"<<endl;
}
void xuat(sinhvien sv[],int n){
	tieu_de();
	for(int i=0;i<n;i++){
		cout<<setw(11)<<sv[i].ma_sv;
		cout<<setw(31)<<sv[i].ho_ten;
		cout<<setw(11)<<sv[i].age;
		cout<<setw(11)<<sv[i].dt;
		cout<<setw(11)<<sv[i].dl;
		cout<<setw(11)<<sv[i].dh;
		cout<<setw(11)<<sv[i].dtb;
	}
}
void diem_tb(sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		sv[i].dtb=(sv[i].dt+sv[i].dl+sv[i].dh)/3;
	}
}
void sap_xep(sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(sv[i].dtb<sv[j].dtb){
				swap(sv[i],sv[j]);
			}
		}
		cout<<sv[i].ho_ten<<endl;
	}
}
int main(){
	int n;
	cout<<"\nnhap so luong sinh vien ";
	do{
		cin>>n;
		if(n<0||n>100){
			cout<<"nhap sai r ban oi"<<endl;
		}
	}while(n<0||n>100);
sinhvien sv[n];
cout<<"\nnhap thong tin sv ";
nhap(sv,n);
diem_tb(sv,n);
cout<<"\nthong tin vua nhap la ";
xuat(sv,n);
cout<<"\ndanh sach sap xep giam dan theo diem "<<endl;
sap_xep(sv,n);
xuat(sv,n);

}

