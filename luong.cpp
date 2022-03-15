/*BAI TAP LON_MON TIN CO SO*/
/*SV: GIANG THI THUY LUONG_DHTI15A22HN*/

#include<iostream>	//khai bao thu vien vao ra
#include<fstream> 	//khai bao thu vien tep
#include<iomanip>

using namespace std;

struct book				//cau truc thong tin cua sach 
{
	char ms[10],ts[20],tg[20],NXB[20];
	int NamXB,soluong;
	float dongia,VAT,tt,tut;
};
struct book sach[100];	//cho 100 quyen sach

void  chuong_trinh()			//thong tin chuc nang cua chuong trinh 
{ 
	system("cls");
	cout<<"NHAN 1 DE NHAP THONG TIN SACH\nNHAN 2 DE IN RA THONG TIN SACH\n";
	cout<<"NHAN 3 DE TINH THANH TIEN\nNHAN 4 DEN TINH THUC TIEN\n";
	cout<<"NHAN 5 DE SAP XEP SACH THEO THU TU GIAM DAN NAM SAN XUAT\n";
	cout<<"NHAN 6 DE IN THONG TIN QUYEN SACH CO THUC TIEN LON NHAT\n";
	cout<<"NHAN 7 DE IN TONG SO CAC CUON SACH\n";
	cout<<"NHAN 8 DE IN RA DANH SACH CAC CUON CO SO THUE LON HON SO CUA BAN\n";
	cout<<"NHAN 9 DE LUU DANH SACH CAC CUON RA BOOK.DAT\n";
	cout<<"NHAN 10 DE DOC DANH SACH CAC CUON TU TEP BOOK.DAT VA KET XUAT RA MAN HINH\n";
	cout<<"NHAN 0 DE THOAT KHOI CHUONG TRINH";
}
int xu_li_chuong_trinh(int &a)		//ham xu li lua chon nhap vao 
{
		system("cls");
		chuong_trinh();
		cout<<"\n\nNHAP CHUC NANG BAN MUON SU DUNG\n";
		cin>>a;
	while(a<0||a>10)
	{
		cout<<"CHUC NANG KHONG HOP LE!\n";
		cout<<"NHAN ENTER DE NHAP LAI LUA CHON\n";
		system("pause");
		system("cls");
		chuong_trinh();
		cout<<"\n\nNHAP CHUC NANG BAN MUON SU DUNG\n";
		cin>>a;
	}
	return a; 
}
//CN1: ham thuc hien chuc nang nhap thong tin sach
void CN1_nhap(int n)				
{
	system("cls");
	cout<<"\a\t\t----------NHAP VAO THONG TIN CUA SACH----------------\n\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\tNHAP THONG TIN QUYEN SACH THU "<<i+1<<endl;
		fflush(stdin);
		cout<<"Ma sach: ";gets(sach[i].ms);
		fflush(stdin);
		cout<<"Ten sach: ";gets(sach[i].ts);
		fflush(stdin);
		cout<<"Tac gia: ";gets(sach[i].tg);
		fflush(stdin);
		cout<<"Nha xuat ban: ";gets(sach[i].NXB);
		cout<<"Nam xuat ban: ";cin>>sach[i].NamXB;
		cout<<"don gia: ";cin>>sach[i].dongia;
		cout<<"Thue VAT: ";cin>>sach[i].VAT;
		cout<<"So luong: ";cin>>sach[i].soluong;
		sach[i].tt=float(sach[i].dongia*sach[i].soluong);
		sach[i].tut=sach[i].tt+sach[i].VAT;
	}
	cout<<"\t\t----------NHAN ENTER DE TRO VE---------------\n";
	system("pause");
} 
void tieu_de()
{
	cout<<setw(20)<<"|ma";
	cout<<setw(20)<<"|name";
	cout<<setw(20)<<"|tac gia";
	cout<<setw(15)<<"|nha XB";
 	cout<<setw(9)<<"|nam XB";
 	cout<<setw(12)<<"|don gia";
 	cout<<setw(12)<<"|thue VAt";
 	cout<<setw(12)<<"|so luong";
 	cout<<setw(15)<<"|thanh tien ";
 	cout<<setw(15)<<"|thuc tien "<<endl;
} 
//CN2: ham thuc hien chuc nang in thong tin sach
void CN2_in(int n)				
{
	system("cls");
	cout<<"\a\t\t----------THONG TIN CUA CAC QUYEN SACH-----------------\n\n";
	tieu_de(); 
	for(int i=0;i<n;i++)
	{
		cout<<setw(8)<<"QUYEN"<<i+1;
		cout<<setw(12)<<sach[i].ms;
		cout<<setw(20)<<sach[i].ts;
		cout<<setw(20)<<sach[i].tg;
		cout<<setw(15)<<sach[i].NXB;
		cout<<setw(9)<<sach[i].NamXB;
		cout<<setw(12)<<sach[i].dongia;
		cout<<setw(12)<<sach[i].VAT;
		cout<<setw(12)<<sach[i].soluong;
		cout<<setw(15)<<sach[i].tt;
		cout<<setw(15)<<sach[i].tut;
		cout<<"\n";
	}
	cout<<"\t\t-----------NHAN ENTER DE TRO VE------------\n";
	system("pause");
}
//CN3: ham thuc hien chuc nang tinh thanh tien
void CN3_thanh_tien(int n)		
{
	system("cls");
	cout<<"\a\t\t----------THANH TIEN CUA CAC CUON SACH----------\n\n";
	for(int i=0;i<n;i++)
	{
		cout<<"THANH TIEN CUA QUYEN SACH THU "<<i+1<<" LA: ";
		cout<<sach[i].tt<<endl;
	}
	cout<<"\t\t----------NHAN ENTER DE TRO VE---------------\n";
	system("pause");	
}
//CN4: ham thuc hien chuc nang tinh thuc tien
void CN4_thuc_tien(int n)	
{
	system("cls");
	cout<<"\a\t\t----------THUC TIEN CUA CAC CUON SACH----------\n\n";
	for(int i=0;i<n;i++)
	{
		cout<<"THUC TIEN CUA QUYEN SACH THU "<<i+1<<" LA: ";
		cout<<sach[i].tut<<endl;
	}
	cout<<"\t\t----------NHAN ENTER DE TRO VE---------------\n";
	system("pause");
}
//CN5: ham thuc hien chuc nang sap xep sach theo thu tu giam dan nam XB
void CN5_sap_xep(int n)			
{
	system("cls");
	cout<<"\a\t\t------------DANH SACH CAC CUON SACH THEO THU TU GIAM DAM NAM SAN XUAT-----------\n\n";
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(sach[i].NamXB<sach[j].NamXB)
				swap(sach[i],sach[j]);
		}
		cout<<sach[i].ts<<"\t";
	}
	cout<<"\n\t\t----------NHAN ENTER DE TRO VE---------------\n";
	system("pause");
}
//CN6: ham thuc hien chuc nang in thong tin quyen sach co thuc tien lon nhat
void CN6_sach_co_thuc_tien_lon_nhat(int n)	
{
	system("cls");
	cout<<"\a\t\t------QUYEN SACH CO THUC TIEN LON NHAT------\n\n";
	float max;
	for(int i=0;i<n;i++)
	{
		if(sach[i].tut>max)
			max=sach[i].tut;
	}
	for(int i=0;i<n;i++)
	{
		if(sach[i].tut==max)
		{
			cout<<"Ma sach: "<<sach[i].ms<<"\n";
			cout<<"don gia: "<<sach[i].dongia<<"\n";
			cout<<"Nha xuat ban: "<<sach[i].NXB<<endl;
			cout<<"Ten sach: "<<sach[i].ts<<"\n";
			cout<<"Thue VAT: "<<sach[i].VAT<<"\n";
			cout<<"Nam xuat ban: "<<sach[i].NamXB<<endl;
			cout<<"Tac gia: "<<sach[i].tg<<"\n";
			cout<<"So luong: "<<sach[i].soluong<<endl;
			cout<<"Thanh tien: "<<sach[i].tt<<endl;
			cout<<"Thuc tien: "<<sach[i].tut<<endl;
			cout<<"\n";
		}
	}
	cout<<"\n\t\t----------NHAN ENTER DE TRO VE---------------\n";
	system("pause");
}
//CN7: ham thuc hien chuc nang in ra tong so sach
void CN7_tong_so_sach(int n)
{
	system("cls");
	cout<<"\a\t\t------TONG SO CAC CUON SACH------\n\n";
	cout<<"So sach hien co "<<n<<endl;
	cout<<"\n\t\t----------NHAN ENTER DE TRO VE---------------\n";
	system("pause");
}
//CN8: ham thuc hien chuc nang in ra sach co so thue VAT cao hon hs
void CN8_sach_co_thue_cao_hon(int n)
{
	system("cls");
	float hs;
	cout<<"\a\t\t------DANH SACH CAC CUON SACH CO SO THUE CAO HON------\n\n";
	cout<<"nhap so thue ban muon so sanh\n";
	cin>>hs;
	for(int i=0;i<n;i++)
	{
		if(sach[i].VAT>hs)
			cout<<sach[i].ts<<"\t";
	}
	cout<<"\n\t\t----------NHAN ENTER DE TRO VE---------------\n";
	system("pause");
}
//CN9: ham thuc hien chuc nang luu tep books.dat
void CN9_luu_file(ofstream &filevar,int n)
{
	system("cls");
	filevar<<"\t\t----------THONG TIN CUA CAC QUYEN SACH-----------------\n\n";
	for(int i=0;i<n;i++)
	{
		filevar<<"\tQUYEN SACH THU "<<i+1<<endl;
		filevar<<"Ma sach: "<<sach[i].ms<<"\nTen sach: "<<sach[i].ts<<"\nTac gia: "<<sach[i].tg<<"\n";
		filevar<<"Nha xuat ban: "<<sach[i].NXB<<endl<<"Nam xuat ban: "<<sach[i].NamXB<<endl;
		filevar<<"don gia: "<<sach[i].dongia<<"\nThue VAT: "<<sach[i].VAT<<"\nSo luong: "<<sach[i].soluong<<endl;
		filevar<<"Thanh tien: "<<sach[i].tt<<"\nThuc tien: "<<sach[i].tut<<endl;
		filevar<<"\n\n";
	}
	cout<<"Da luu tep\n";
	cout<<"\n\t\t----------NHAN ENTER DE TRO VE---------------\n";
	system("pause");
} 
/*void CN10_doc_file(ifstream &file)
{
	system("cls");
	int b=1;
	char a[1000];
	while(file.eof()==false)
	{
		file>>a[b];
		b++;
	}
	for(int i=0;i<b;i++)
	{
		cout<<a[i];
	}
	cout<<"\n\t\t----------NHAN ENTER DE TRO VE---------------\n";
	system("pause");	
}*/
int main()				//ham chinh		
{
	int n, chuc_nang;
	cout<<"NHAP SO QUYEN SACH\n";	//nhap vao 3 quyen
	cin>>n;
	system("cls");
	while(true)			//vong lap vo han chay menu chuong trinh
	{
		xu_li_chuong_trinh(chuc_nang);
		if(chuc_nang==1)
			CN1_nhap(n);
		else if(chuc_nang==2)
			CN2_in(n);
		else if(chuc_nang==3)
			CN3_thanh_tien(n);
		else if(chuc_nang==4)
			CN4_thuc_tien(n);
		else if(chuc_nang==5)
			CN5_sap_xep(n);
		else if(chuc_nang==6)
			CN6_sach_co_thuc_tien_lon_nhat(n);
		else if(chuc_nang==7)
			CN7_tong_so_sach(n);
		else if(chuc_nang==8)
			CN8_sach_co_thue_cao_hon(n);
		else if(chuc_nang==9)
		{
			ofstream f("books.dat");
			if(!f)
			{
				cout<<"Khong the ghi tep";
				exit(1);
			}
			CN9_luu_file(f,n);
			f.close();
		}
		/*else if(chuc_nang==10)
		{
			ifstream fi("books.dat");
			if(!fi)
			{
				cout<<"Khong the mo tep";
				exit(1);
			}
			CN10_doc_file(fi);
			fi.close();
		}*/
		else
			break;
	}
	
	return 0;
}

