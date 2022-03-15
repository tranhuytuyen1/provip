//84-Tran Huy Tuyen15A22//
//bai tap lon tin co so//
#include<iostream>	//khai bao thu vien cho tep nguyen mau dung de dc cin vs cout
#include<fstream> 	//khai bao thu vien tep su dung tac vu file 
#include<iomanip>   //khai bao thu vien su dung tieu de
using namespace std;
struct Book{
	char ma_sach[10],ten_sach[20],tac_gia[20],nha_XB[20];
	int nam_XB,so_luong;
	float don_gia,VAT,thanh_tien,thuc_tien;
};
void menu(){
	system("cls");
	cout<<"\n\n";
	cout<<"\t+====================================================================================================+"<<endl;
	cout<<"\t|					MENU				  				|"<<endl;
	cout<<"\t+====================================================================================================+"<<endl;
	cout<<"+ NHAN 1 DE NHAP THONG TIN SACH\n+ NHAN 2 DE IN RA THONG TIN SACH +\n";
	cout<<"+ NHAN 3 DE TINH THANH TIEN\n+ NHAN 4 DEN TINH THUC TIEN +\n";
	cout<<"+ NHAN 5 DE SAP XEP SACH THEO THU TU GIAM DAN NAM SAN XUAT +\n";
	cout<<"+ NHAN 6 DE IN THONG TIN QUYEN SACH CO THUC TIEN LON NHAT +\n";
	cout<<"+ NHAN 7 DE IN TONG SO CAC CUON SACH +\n";
	cout<<"+ NHAN 8 DE IN RA DANH SACH CAC CUON CO SO THUE LON HON SO CUA BAN +\n";
	cout<<"+ NHAN 9 DE LUU DANH SACH CAC CUON RA BOOK.DAT +\n ";
	cout<<"+ NHAN 10 DE DOC DANH SACH CAC CUON TU TEP BOOK.DAT VA KET XUAT RA MAN HINH +\n";
	cout<<"NHAN 0 DE THOAT KHOI CHUONG TRINH\n";
	cout<<"\t+=====================================================================================================+"<<endl;
         	
	cout<<" \t VUI LONG NHAP SO DE THUC HIEN YEU CAU: ";
	cout<<endl;
}

//CN1: ham thuc hien chuc nang nhap thong tin sach
void nhap(Book s[],int n){
	system("cls");//lam sach man hinh hien thi 
	cout<<"\a\t\t===========NHAP VAO THONG TIN CUON SACH==============\n\n";
	for(int i=0;i<n;i++){
		cout<<"\nNHAP THONG TIN CUON SACH THU : "<<i+1<<endl;
	 cin.ignore();//xoa khong chong
	  cout<<"\n\tMa sach ";
	  cin.getline(s[i].ma_sach,10);
	  cout<<"\n\tTen sach ";
	  cin.getline(s[i].ten_sach,20);
	  cout<<"\n\tTac gia ";
	  cin.getline(s[i].tac_gia,20);
	  cout<<"\n\tNha xuat ban ";
	  cin.getline(s[i].nha_XB,20);
	  cout<<"\n\tNam xuat ban ";
	  cin>>s[i].nam_XB;
	  cout<<"\n\tDon gia ";
	  cin>>s[i].don_gia;
	  cout<<"\n\tthue VAT ";
	  cin>>s[i].VAT;
	  cout<<"\n\tSo luong ";
	  cin>>s[i].so_luong;
	  s[i].thanh_tien=float(s[i].don_gia*s[i].so_luong);
	  s[i].thuc_tien=s[i].thanh_tien+s[i].VAT;
	}
	system("pause");//tam dung den khi an 1 phim bat ky
}
void tieu_de(){
	cout << "+============================================================================================================================================================+\n";
	cout<<"|"; 
	cout<<setw(20)<<"ma |";
	cout<<setw(20)<<"name |";
	cout<<setw(20)<<"tac gia |";
	cout<<setw(15)<<"nha XB |";
	cout<<setw(10)<<"nam XB |";
	cout<<setw(12)<<"don gia |";
	cout<<setw(12)<<"thue VAT |";
	cout<<setw(12)<<"so luong |";
	cout<<setw(15)<<"thanh tien |";
	cout<<setw(15)<<"thuc tien |"<<endl;
	cout << "+============================================================================================================================================================+\n";
}
//CN2 ham thuc hien chuc nang in thong tin sach
void xuat(Book s[],int n){
	system("cls");
	cout<<"\a\t\t=============HIEN THONG TIN CAC CUON SACH==============\n\n";
	tieu_de();
	for(int i=0;i<n;i++){
	cout<<setw(20)<<s[i].ma_sach;
	cout<<setw(20)<<s[i].ten_sach;
	cout<<setw(20)<<s[i].tac_gia;
	cout<<setw(15)<<s[i].nha_XB;
	cout<<setw(10)<<s[i].nam_XB;
	cout<<setw(12)<<s[i].don_gia;
	cout<<setw(12)<<s[i].VAT;
	cout<<setw(12)<<s[i].so_luong;
	cout<<setw(15)<<s[i].thanh_tien;
	cout<<setw(15)<<s[i].thuc_tien<<endl;
	}
	cout<<"\t\t-----------NHAN ENTER DE TRO VE------------\n";
	system("pause");
}
//CN3 ham thuc hien chuc tinh thanh tien cua cuon sach
void Tinh_thanh_tien(Book s[],int n){
	system("cls");
	cout<<"\a\t\t=================THANH TIEN CUA CUON SACH=====================\n\n";
	for(int i=0;i<n;i++){
		cout<<"THANH TIEN CUA CUON SACH  :"<<i+1<<" LA :";
		cout<<s[i].thanh_tien<<endl;
	}
	system("pause");
}
//CN4 ham thuc hien chuc nang tinh thuc tien cua cuon sach
void Tinh_thuc_tien(Book s[],int n){
	system("cls");
		cout<<"\a\t\t=================THUC TIEN CUA CUON SACH=====================\n\n";
	for(int i=0;i<n;i++){
		cout<<"THUC TIEN CUA CUON SACH THU "<<i+1<<" LA: ";
	cout<<s[i].thuc_tien<<endl;	
	}
	system("pause");
}
//CN5 sap xep giam dan theo nam xuat ban
void sap_xep(Book s[],int n){
	system("cls");
	cout<<"\a\t\t=================DANH SACH CAC CUON SACH THEO THU TU GIAM DAN =====================\n\n";
	tieu_de();
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i].nam_XB<s[j].nam_XB){
				swap(s[i],s[j]);// cau lenh thay doi thu tu toan bo 
			}
		} 
	}
	for(int i=0;i<n;i++){
		cout<<"|";
	cout<<setw(20)<<s[i].ma_sach;
	cout<<setw(20)<<s[i].ten_sach;
	cout<<setw(20)<<s[i].tac_gia;
	cout<<setw(15)<<s[i].nha_XB;
	cout<<setw(10)<<s[i].nam_XB;
	cout<<setw(12)<<s[i].don_gia;
	cout<<setw(12)<<s[i].VAT;
	cout<<setw(12)<<s[i].so_luong;
	cout<<setw(15)<<s[i].thanh_tien;
	cout<<setw(15)<<s[i].thuc_tien<<endl;
	cout << "+============================================================================================================================================================+\n";
	}
	system("pause");
}
//CN6 ham thuc hien chuc nang in thong tin quyen sach co thuc lon nhat
void sach_co_thuc_tien_lon_nhat(Book s[],int n){
	system("cls");
	cout<<"\a\t\t=================QUYEN SACH CO SO THUC LON NHAT =====================\n\n";
float max;
for(int i=0;i<n;i++){
	if(s[i].thuc_tien>max){
		max=s[i].thuc_tien;
	}	
}
tieu_de();
for(int i=0;i<n;i++){
	if(s[i].thuc_tien==max){
		cout<<"ma sach "<<s[i].ma_sach <<"\n";
		cout<<"ten sach "<<s[i].ten_sach <<"\n";
		cout<<"tac gia "<<s[i].tac_gia <<"\n";
		cout<<"nha XB "<<s[i].nha_XB <<"\n";
		cout<<"nam XB "<<s[i].nam_XB <<"\n";
		cout<<"so luong "<<s[i].so_luong <<"\n";
		cout<<"thue VAT "<<s[i].VAT <<"\n";
		cout<<"thanh tien "<<s[i].thanh_tien <<"\n";
		cout<<"\n";
	}
}
system("pause");
} 
//CN7: ham thuc hien chuc nang in ra tong so sach
void tong_so_sach(Book s[],int n){
	int t=0;
	system("cls");
	cout<<"\a\t\t------TONG SO CAC CUON SACH------\n\n";
	for(int i=0;i<n;i++){
		t+=s[i].so_luong;
	}
	cout<<"\n\n";
cout<<"\t\t+===========================================================+\n";
cout<<"\t\t|TONG SO PHAI CUON SACH LA:"<<t<<endl;
cout<<"\t\t+===========================================================+\n"<<endl;
		system("pause");
}
//CN8:sach co so thue cao nhat
void sach_co_so_thue_cao_nhat(Book s[],int n){
	system("cls");
	float hs;
	cout<<"\a\t\t\t\t\t\t---------DANH SACH CAC CUON SACH CO SO THUE CAO HON--------\n\n";
	cout<<"Nhap so thue ban muon so sanh\n";
	cin>>hs;
	for(int i=0;i<n;i++){
		if(s[i].VAT>hs){
	cout<<setw(20)<<s[i].ma_sach;
	cout<<setw(20)<<s[i].ten_sach;
	cout<<setw(20)<<s[i].tac_gia;
	cout<<setw(15)<<s[i].nha_XB;
	cout<<setw(10)<<s[i].nam_XB;
	cout<<setw(12)<<s[i].don_gia;
	cout<<setw(12)<<s[i].VAT;
	cout<<setw(12)<<s[i].so_luong;
	cout<<setw(15)<<s[i].thanh_tien;
	cout<<setw(15)<<s[i].thuc_tien<<endl;
		}
	}
	system("pause");
}
//CN9: ham thuc hien chuc nang luu tep books.dat
void luu_file(Book s[],int n){
	system("cls");
	ofstream output ("books.dat",ios::out);
	if(!output)
	{
		cout<<"[!]khong the ghi tep ";
		exit(1);
	}else{
		output<<n<<endl;
		for(int i=0;i<n;i++){
	output<<setw(20)<<s[i].ma_sach;
	output<<setw(20)<<s[i].ten_sach;
	output<<setw(20)<<s[i].tac_gia;
	output<<setw(15)<<s[i].nha_XB;
	output<<setw(10)<<s[i].nam_XB;
	output<<setw(12)<<s[i].don_gia;
	output<<setw(12)<<s[i].VAT;
	output<<setw(12)<<s[i].so_luong;
	output<<setw(15)<<s[i].thanh_tien;
	output<<setw(15)<<s[i].thuc_tien<<endl;
	}
	cout<<"\t\t\t **** LUU THANH CONG **** "<<endl;	
	}
	output.close();
	cout<<"\n\n\t\t-------------NHAN ENTER DE TRO VE-----------------------\n";
	system("pause");
}
//CN10: ham thuc hien chuc nang doc file va ket xuat
void doc_file(Book s[],int n){
	ifstream input("books.dat",ios::in);
	if(!input){
      cout<<"[!] Khong tim thay tep tin !";
	}else{
		input>>n;
		for(int i=0;i<n;i++){
	input>>s[i].ma_sach;
	input>>s[i].ten_sach;
	input>>s[i].tac_gia;
	input>>s[i].nha_XB;
	input>>s[i].nam_XB;
	input>>s[i].don_gia;
	input>>s[i].VAT;
	input>>s[i].so_luong;
	input>>s[i].thanh_tien;
	input>>s[i].thuc_tien;
	}
	cout<<"\t\t\t **** LUU THANH CONG **** "<<endl;
		tieu_de();
	}
	input.close();
	cout<<"\n\n\t\t-------------NHAN ENTER DE TRO VE-----------------------\n";  
    system("pause");
	}

int main(){
	int n;
	cout<<"\nnhap so luong cuon sach la :"<<endl;
	do{
		cin>>n;
		if(n<0||n>100){
			cout<<"sai roi b oi nhap lai di !!"<<endl;
			cout<<"gioi han co 3 quyen thoi !!"<<endl;
			cout<<"nhieu moi nhap moi tay lam :("<<endl;
		}
	}while(n<0||n>100);
	Book s[n];
	while(true){
		menu();
		int luachon;
		cin>>luachon;
		if( luachon ==1){
			cout<<"nhap thong tin cuon sach :"<<endl;
			nhap(s,n);
		}else if( luachon==2){
			cout<<"xuat thong tin cuon sach :"<<endl;
			xuat(s,n);
		}else if( luachon==3){
			cout<<"tinh thanh tien :"<<endl;
			Tinh_thanh_tien(s,n);
		}else if( luachon==4){
			cout<<"tinh thuc tien :"<<endl;
			Tinh_thuc_tien(s,n);
		}else if( luachon==5){
			cout<<"sap xep theo chieu giam dan cua nam XB :"<<endl;
			sap_xep(s,n);
		}else if( luachon==6){
			cout<<"sach co so thuc tien lon nhat :"<<endl;
			sach_co_thuc_tien_lon_nhat(s,n);
		}else if( luachon==7){
			cout<<"tong so sach"<<endl;
			tong_so_sach(s,n);
		}else if( luachon==8){
			cout<<"sach co thue cao nhat :"<<endl;
			sach_co_so_thue_cao_nhat(s,n);
		}else if( luachon==9){
		 cout<<"luu file"<<endl;
		 luu_file(s,n);
		}else if( luachon==10){
			doc_file(s,n);
		}else{
			break;
		}
		
	}
	return 0;
}

