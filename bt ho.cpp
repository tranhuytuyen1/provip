
#include<iostream>	//khai bao thu vien vao ra
#include<fstream> 	//khai bao thu vien tep
#include<iomanip>
using namespace std;
struct canbo{
	char macb[10],tencb[20],pb[20],chucvu[20];
	float hsl,phucap,luong;
};
void menu(){
	system("cls");
	cout<<"NHAN 1 XAY DUNG MENU THUC HIEN CACH CHUC NANG\n";
	cout<<"NHAN 2 NHAP DANH SACH CAN BO\n ";
	cout<<"NHAN 3 TINH LUONG CUA TUNG CAN BO\nNHAP 4 IN DANH SACH CAN BO ";
	cout<<"NHAN 5 TINH VA HIEN THI TONG LUONG CUA CAC CAN BO TRONG PHONG HANH CHINH\n";
	cout<<"NHAN 6 SAP XEP DANH SACH CAN BO THEO CHIEU TANG DAN CUA LUONG\n";
	cout<<"NHAN 7 THEM VAO DANH SACH MOT CAN BO THEO CHIEU TANG DAN CUA LUONG\n";
	cout<<"NHAN 8 XOA KHOI DANH SACH CAN BO CO MA LA mcb,TRONG DO NHAP TU BAN PHIM\n";
	cout<<endl;
}
void nhap(canbo cb[],int n){
	system("cls");//lam sach man hinh hien thi 
	cout<<"\a\t\t===========NHAP VAO THONG TIN CAN BO==============\n\n";
	for(int i=0;i<n;i++){
		cout<<"\nNHAP THONG TIN CUON CAN BO : "<<i+1<<endl;
	 cin.ignore();//xoa khong chong
	  cout<<"\n\tMa Can Bo ";
	  cin.getline(cb[i].macb,10);
	  cout<<"\n\tTen Can Bo ";
	  cin.getline(cb[i].tencb,20);
	  cout<<"\n\tPhong Ban ";
	  cin.getline(cb[i].pb,20);
	  cout<<"\n\tChuc Vu ";
	  cin.getline(cb[i].chucvu,20);
	  cout<<"\n\tHe So Luong ";
	  cin>>cb[i].hsl;
	  cout<<"\n\tLuong ";
	  cin>>cb[i].luong;
	}
	system("pause");//tam dung den khi an 1 phim bat ky
}
void tieu_de(){
	cout<<setw(20)<<"Ma |";
	cout<<setw(20)<<"Ten |";
	cout<<setw(20)<<"Phong ban |";
	cout<<setw(15)<<"So luong |";
	cout<<setw(10)<<"Chuc vu |";
	cout<<setw(12)<<"luong |"<<endl;
}
void xuat(canbo cb[],int n){
	system("cls");
	cout<<"\a\t\t=============HIEN THONG TIN CAN BO==============\n\n";
	tieu_de();
	for(int i=0;i<n;i++){
	cout<<setw(20)<<cb[i].macb;
	cout<<setw(20)<<cb[i].tencb;
	cout<<setw(20)<<cb[i].pb;
	cout<<setw(15)<<cb[i].chucvu;
	cout<<setw(10)<<cb[i].hsl;
	cout<<setw(12)<<cb[i].luong<<endl;
}
	cout<<"\t\t-----------NHAN ENTER DE TRO VE------------\n";
	system("pause");
}
int main(){

}

