#include<iostream>
#include<iomanip>
using namespace std;
struct Sanpham {
	char ma_sp[8];
	char name_sp[30];
	int sl;
	float don_gia;
	float thanh_tien;
	
};
void nhap(Sanpham sp[],int n ){
for(int i=0;i<n;i++){
	cout<<"\n\tsan pham thu :"<<i+1<<endl;
	cin.ignore();
	cout<<"\n\tnhap ma ma sp :";
	cin.getline(sp[i].ma_sp,8);
	cout<<"\n\tnhap ten sp : ";
	cin.getline(sp[i].name_sp,30);
	cout<<"\n\tnhap sl :";
	cin>>sp[i].sl;
	cout<<"\n\tnhap don gia :";
	cin>>sp[i].don_gia;
	
}
}
void tieu_de(){
	cout<<setw(10)<<"ma";
    cout<<setw(31)<<"ten";
    cout<<setw(15)<<"so luong ";
    cout<<setw(15)<<"don gia ";
    cout<<setw(15)<<"thanh tien"<<endl;
}
void Thanh_tien(Sanpham sp[],int n ){
	for(int i=0;i<n;i++){
		sp[i].thanh_tien=sp[i].sl*sp[i].don_gia;
	}
}
void xuat(Sanpham sp[],int n ){
	tieu_de();
	for(int i=0;i<n;i++){
		cout<<setw(10)<<sp[i].ma_sp
            <<setw(31)<<sp[i].name_sp
			<<setw(15)<<sp[i].sl	
		    <<setw(15)<<sp[i].don_gia
		    <<setw(15)<<sp[i].thanh_tien<<endl;
	}
}
void spgiaduoi20000 ( Sanpham sp [ ] , int n )
{
	for  ( int i =  0 ; i < n ; i ++ )
	{
 
		if  ( sp [ i ] . don_gia  <=  20000 )
		{
			cout  << setw ( 10 )  << sp [ i ] . ma_sp ;
			cout  << setw ( 31 )  << sp [ i ] . name_sp ;
			cout  << setw ( 15 )  << sp [ i ] . sl ;
			cout  << setw ( 15 )  << sp [ i ] . don_gia ;
			cout  << setw ( 15 )  << sp [ i ] . thanh_tien  << endl ;
		}
	}
}
int main(){
	int	n;
	cout<<"\n\tnhap so luong  san pham  :"<<endl;
	do{
	cin>>n;
	if(n<0||n>100){
		cout<<"nhap lai di b oi !!"<<endl;
	}
	}while(n<0||n>100);
	Sanpham sp[n];
	nhap(sp,n);
	Thanh_tien(sp,n);
	xuat(sp,n);
	spgiaduoi20000(sp,n);
	cout<<endl;
	return 0;
	
}

