#include <iostream>
#include <iomanip.h>  
#include <fstream.h> 
#include <string.h> 
using namespace std;
struct NhanVien
{
	char Ma_nv[10];
          char SDT [11];
	char Ho_va_Ten[30];
	int LCB,Phu_Cap,Luong_Thang,Thu_Nhap ;
          float HE_SO;
};

void Nhap (NhanVien a[],int &n)
{
	for(int i= 0;i < n; i++)
{
	cout<<"\n  (-)    ==========Nhan vien thu "<<i+1<<" ==========="<<endl;
	                  cin.ignore();
	cout<<"\n  (+)    Nhap MNV: ";
	cin.getline(a[i].Ma_nv,10);
	cout<<"\n  (+)   Ho va ten: ";
	cin.getline(a[i].Ho_va_Ten,30);
	cout<<"\n  (+)  Nhap SDT: ";
          cin.getline(a[i].SDT,11);
	cout<<"\n  (+)  Nhap luong co ban :";
	cin>>a[i].LCB;
	cout<<"\n  (+)   Nhap he so luong : ";
	cin>>a[i].HE_SO;
	cout<<"\n  (+)   Nhap luong phu cap:  ";
	cin>>a[i].Phu_Cap;
}

}


//TAO BANG NHAP
void Taobang_0()
{ cout << "+============================================================================================================================================================+\n"; 
  cout<<"|";
	cout<<setw(20)<<"MA"<<"|";
	cout<<setw(20)<<"HO VA TEN"<<"|";
	cout<<setw(20)<<"SDT"<<"|";
	cout<<setw(20)<<"LUONG CO BAN"<<"|";
	cout<<setw(20)<<"HE SO"<<"|";
	cout<<setw(20)<<"LUONG PHU CAP"<<"|";
	cout<<endl;

cout << "+============================================================================================================================================================+\n";
}



//TAO BANG 
void Taobang_1()
{ cout << "+============================================================================================================================================================+\n"; 
  cout<<"|";
	cout<<setw(20)<<"MA"<<"|";
	cout<<setw(20)<<"HO VA TEN"<<"|";
	cout<<setw(20)<<"SDT"<<"|";
	cout<<setw(20)<<"CO BAN"<<"|";
	cout<<setw(20)<<"HE SO "<<"|";
	cout<<setw(20)<<"PHU CAP"<<"|";
	cout<<setw(20)<<"THU NHAP"<<"|";
	cout<<endl;

cout << "+============================================================================================================================================================+\n";
}

//IN DANH SACH THONG TIN NHAN VIEN DUOI DANG BANG
void In_danh_sach_nhap(NhanVien a[],int n)
{         Taobang_0();
	for(int i=0;i<n;i++)
{         cout<<"|";
	cout<<setw(20)<<a[i].Ma_nv<<"|";
	cout<<setw(20)<<a[i].Ho_va_Ten<<"|";
	cout<<setw(20)<<a[i].SDT<<"|";
	cout<<setw(20)<<a[i].LCB<<"|";
	cout<<setw(20)<<a[i].HE_SO<<"|";
	cout<<setw(20)<<a[i].Phu_Cap<<"|";
	cout<<endl;


cout << "+============================================================================================================================================================+\n";	
}
}

//TÍNH LUONG THANG
float Tinh_Luong_Thang(NhanVien a[],int &n)
{
for(int i= 0;i < n; i++)
{    a[i].Luong_Thang = a[i].LCB * a[i].HE_SO;
     cout<<"\n*************************************************";
     cout<<"\n*	 Luong thang  cua:"<<a[i].Ho_va_Ten;
     cout<<"\n*						*";
     cout<<"\t\n*           ="<< a[i].Luong_Thang<<" VND";
     cout<<"\n*						*";
     cout<<"\n*						*";
     cout<<"\n*						*";
     cout<<"\n*************************************************";
     cout<<"\n";
}
}

//TÍNH THU NHÂP 
float Tinh_Thu_Nhap(NhanVien a[],int &n)
{
for(int i= 0;i < n; i++)
{             a[i].Thu_Nhap = a[i].Luong_Thang + a[i].Phu_Cap;
     cout<<"\n*************************************************";
     cout<<"\n*	   Thu nhap cua:"<<a[i].Ho_va_Ten;
     cout<<"\n*						*";
     cout<<"\t\n*            ="<< a[i].Thu_Nhap<<" VND";
     cout<<"\n*						*";
     cout<<"\n*						*";
     cout<<"\n*						*";
     cout<<"\n*************************************************";
     cout<<"\n";
}
}

//SAP XEP TANG DAN VE HE SO LUONG
 void Sapxep(NhanVien a[],int n)
 { Taobang_0();
 for(int i= 0; i < n ;  i++)
 {for(int j= i + 1 ;j < n ; j++)
 {
          if (a[i].HE_SO>a[j].HE_SO){
     	   NhanVien tg=a[i];
     	   a[i]=a[j];
     	   a[j]=tg;
 }	
 }	
 }

  for(int i=0;i<n;i++){
 	   cout<<"|";
	cout<<setw(20)<<a[i].Ma_nv<<"|";
	cout<<setw(20)<<a[i].Ho_va_Ten<<"|";
	cout<<setw(20)<<a[i].SDT<<"|";
	cout<<setw(20)<<a[i].LCB<<"|";
	cout<<setw(20)<<a[i].HE_SO<<"|";
	cout<<setw(20)<<a[i].Phu_Cap<<"|";
	cout<<endl;


cout << "+============================================================================================================================================================+\n";
 
 }
 }
 
 //IN RA THONG TIN NGUOI CO THU NHAP CAO NHAT
 void Infor_THUNHAP_MAX(NhanVien a[],int n)
 { 
 int c=0;
 for(int i=0;i<n;i++ ){
 NhanVien max = a[0];
 if(a[i].Thu_Nhap>a[0].Thu_Nhap)
 {
 	max=a[i];
 	c=i;
 }
 }
 cout<<"\n\t\t\t\t========>>THONG TIN CUA NGUOI CO THU NHAP CAO NHAT LA <<======="<<endl;
          cout<<"\n";
          Taobang_1();
          cout<<"|";
	cout<<setw(20)<<a[c].Ma_nv<<"|";
	cout<<setw(20)<<a[c].Ho_va_Ten<<"|";
	cout<<setw(20)<<a[c].SDT<<"|";
	cout<<setw(20)<<a[c].LCB<<"|";
	cout<<setw(20)<<a[c].HE_SO<<"|";
	cout<<setw(20)<<a[c].Phu_Cap<<"|";
	cout<<setw(20)<<a[c].Thu_Nhap<<"|";
	cout<<endl;

cout << "+============================================================================================================================================================+\n";}
//TONG LUONG CONG TY PHAI TRA
float Tong_Luong_phai_tra(NhanVien a[],int n)
{int s=0;
for(int i=0;i<n;i++)
{
s=s+a[i].Thu_Nhap;
}  
cout<<"\n\n";
cout<<"\t\t+===========================================================+\n";
cout<<"\t\t|TONG LUONG PHAI TRA CHO NHAN VIEN LA:"<<s<<endl;
cout<<"\t\t+===========================================================+\n"<<endl;
}

//SO SANH HE SO LUONG VS HS NHAP TU BAN PHIM
void sosanh_heso(NhanVien a[],int n)
{
float hs;
cout<<"\n---->> (+)  Nhap HS: ";
cin>>hs;
cout<<"\n\t\t\t========>>THONG TIN CUA NGUOI CO HE SO LUONG > hs LA <<======="<<endl;
cout<<"\n"<<endl;
Taobang_0();
	
for(int i=0;i<n;i++)
{
if(a[i].HE_SO>hs)
{
          cout<<"|";
	cout<<setw(20)<<a[i].Ma_nv<<"|";
	cout<<setw(20)<<a[i].Ho_va_Ten<<"|";
	cout<<setw(20)<<a[i].SDT<<"|";
	cout<<setw(20)<<a[i].LCB<<"|";
	cout<<setw(20)<<a[i].HE_SO<<"|";
	cout<<setw(20)<<a[i].Phu_Cap<<"|";
          cout<<endl;  
          
                                                                                                                                                         
cout << "+============================================================================================================================================================+\n";}

   
}		
}
// LUU TEP
void luu_tep(NhanVien a[],int n)
{
	system ("cls");
	ofstream ofs("nv.dat");
	if(!ofs)
	{
		cout<<"khong the ghi tep";
		exit(1);
	}
	ofs<<"\t\t\t\t\t\t\t---------THONG TIN NHAN VIEN----------------\n\n";
	ofs<< "+======================================================================================================================================================================+\n"; 
          ofs<<"|";
	ofs<<setw(16)<<"MA|";
	ofs<<setw(16)<<"SDT|";
	ofs<<setw(16)<<"HO VA TEN|";
	ofs<<setw(16)<<"LUONG CO BAN|";
	ofs<<setw(16)<<"PHU CAP|";
	ofs<<setw(16)<<"HE SO |";
	ofs<<setw(16)<<"LUONG THANG|";
	ofs<<setw(16)<<"THU NHAP|"<<endl;
          ofs<< "+======================================================================================================================================================================+\n"; 
        
	for(int i=0;i<n;i++)
	{ofs<<"|";
	ofs<<setw(15)<<a[i].Ma_nv<<"|";
	ofs<<setw(15)<<a[i].SDT<<"|";
	ofs<<setw(15)<<a[i].Ho_va_Ten<<"|";
	ofs<<setw(15)<<a[i].LCB<<"|";
	ofs<<setw(15)<<a[i].Phu_Cap<<"|";
	ofs<<setw(15)<<a[i].HE_SO<<"|";
	ofs<<setw(15)<<a[i].Luong_Thang<<"|";
	ofs<<setw(15)<<a[i].Thu_Nhap<<"|";
	ofs<<"\n";
	ofs<< "+======================================================================================================================================================================+\n"; 
         
	}
	ofs.close();
	cout<<"\nDA LUU TEP \n";
	cout<<"\n\n\t\t\t\t\t-------------NHAN ENTER DE TRO VE-----------------------\n";
	system("pause");
}     
//DOC TEP 
void doc_tep(NhanVien a[],int n)
{     system("cls");
      string x;
      ifstream ifs("nv.dat");
      while (!ifs.eof())
      {
      	getline(ifs,x);
      	cout<<x<<endl;
      }

	ifs.close();
	cout<<"\n\n\t\t\t\t\t-------------NHAN ENTER DE TRO VE-----------------------\n";
	system("pause");
}
	
int main()
{ int o;

while(true)
{
	cout<<"\n\n";
	cout<<"\t+====================================================================================================+"<<endl;
	cout<<"\t|					MENU				  				|"<<endl;
	cout<<"\t+====================================================================================================+"<<endl;
	cout<<"\t+		1. Nhap danh sach nhan vien								+"<<endl;
	cout<<"\t+		2. In ra danh sach nhan vien theo dang bang						+"<<endl;
	cout<<"\t+		3. Tinh luong thang cua nhan vien							+"<<endl;
	cout<<"\t+		4. Tinh thu nhap cua nhan vien								+"<<endl;
	cout<<"\t+		5. Sap xep nhan vien theo thu tu tang dan ve he so luong				+"<<endl;
	cout<<"\t+		6. In ra thong tin nguoi co thu nhap cao nhat						+"<<endl;
	cout<<"\t+		7. In thong tin tong luong phai tra cho nhan vien cua cong ty la			+"<<endl;
	cout<<"\t+		8. In ra danh sach cac nhan vien co he so luong > hs 					+"<<endl;
	cout<<"\t+		9. Luu danh sach nhan vien ra tep nv.dat						+"<<endl;
	cout<<"\t+		10.Doc danh sach nhan vien tu tep nv.dat va ke xuat thong tin tren man hinh		+"<<endl;
	cout<<"\t+		0. Thoat										+"<<endl;
	cout<<"\t+=====================================================================================================+"<<endl;
         	
	cout<<" \t VUI LONG NHAP SO DE THUC HIEN YEU CAU: ";cin>>o;
	
                     

           int n;
           NhanVien a[100];
	switch(o)
{
	
case 1:{
cout<<"\n\t\n  (-)     MOI BAN NHAP SO LUONG NHAN VIEN: ";
do{
        cin>>n;
           if(n<0||n>3)
        cout<<"\nVui long nhap lai!! ";	
  }while(n<0||n>3);
Nhap(a,n);
break;
    }
    
    
       
case 2   :{
In_danh_sach_nhap(a,n);
break;
}
case 3:{
      Tinh_Luong_Thang(a,n);
      break;	
}

case 4:
{
Tinh_Thu_Nhap(a,n);
break;	
}
case 5:
{Sapxep(a,n);

break;
}
case 6:  {
            Infor_THUNHAP_MAX(a,n);
            break;
         }
case 7:
         {
             Tong_Luong_phai_tra(a,n);
             break;

         }
case 8:
         {
              sosanh_heso(a,n);
              break;
         }
case 9:{
	luu_tep(a,n);
	break;
}
case 10:
{
	doc_tep(a,n);
	break;
}
}
}
}



