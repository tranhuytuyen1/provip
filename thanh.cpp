#include <iostream>
#include <iomanip>  
#include <fstream> 
      
using namespace std;
struct NhanVien
{
	char Ma_nv[10];
          char SDT [11];
	char Ho_va_Ten[30];
	int LCB,Phu_Cap,Luong_Thang,Thu_Nhap ;
          float HE_SO;
};

void Nhap_1 (NhanVien a[],int &n)
{
	for(int i= 0;i < n; i++)
{
	cout<<"\n========Nhan vien thu "<<i+1<<" ===========";
	cin.ignore();
	cout<<"\nNhap MSV: ";
	cin.getline(a[i].Ma_nv,10);
	cout<<"\n Ho va ten: ";
	cin.getline(a[i].Ho_va_Ten,30);
	cout<<"\nNhap SDT: ";
          cin.getline(a[i].SDT,11);
	cout<<"\nNhap luong co ban :";
	cin>>a[i].LCB;
	cout<<"\n Nhap he so luong : ";
	cin>>a[i].HE_SO;
	cout<<"\n Nhap luong phu cap:  ";
	cin>>a[i].Phu_Cap;
}

}


//TAO BANG
void Taobang()
{ cout << "+============================================================================================================================================================+\n"; 
  cout<<"|";
	cout<<setw(20)<<"MA"<<"|";
	cout<<setw(20)<<"Ho va ten"<<"|";
	cout<<setw(20)<<"SDT"<<"|";
	cout<<setw(20)<<"Luong co ban"<<"|";
	cout<<setw(20)<<"He so luong "<<"|";
	cout<<setw(20)<<"Luong phu cap"<<"|";
	cout<<endl;

cout << "+============================================================================================================================================================+\n";
}
//IN DANH SACH THONG TIN NHAN VIEN DUOI DANG BANG
void In_danh_sach_2(NhanVien a[],int &n)
{         Taobang();
	for(int i=0;i<n;i++)
{         cout<<"|";
	cout<<setw(20)<<a[i].Ma_nv<<"|";
	cout<<setw(20)<<a[i].Ho_va_Ten<<"|";
	cout<<setw(20)<<a[i].SDT<<"|";
	cout<<setw(20)<<a[i].LCB<<"|";
	cout<<setw(19)<<a[i].HE_SO<<"|";
	cout<<setw(20)<<a[i].Phu_Cap<<"|";
	cout<<endl;


cout << "+============================================================================================================================================================+\n";	
}
}

//TÍNH LUONG THANG
float Tinh_Luong_Thang_3(NhanVien a[],int &n)
{
for(int i= 0;i < n; i++)
{    a[i].Luong_Thang = a[i].LCB * a[i].HE_SO;
     cout<<"\n*************************************************";
     cout<<"\n	 Luong thang  cua:"<<a[i].Ho_va_Ten;
     cout<<"\n*						*";
     cout<<"\t\n*         ="<< a[i].Luong_Thang<<" VND";
     cout<<"\n*						*";
     cout<<"\n*						*";
     cout<<"\n*						*";
     cout<<"\n*************************************************";
     cout<<"\n";
}
}

//TÍNH THU NHÂP 
float Tinh_Thu_Nhap_4(NhanVien a[],int &n)
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
 void Sapxep_5(NhanVien a[],int n)
 {for(int i= 0; i < n ;  i++)
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
  cout<<"\t"<<a[i].HE_SO<<"	";
 }
 cout<<"\n\n"<<endl;
 }
 
 
 //IN RA THONG TIN NGUOI CO THU NHAP CAO NHAT
 void INFOR_MAXX_6(NhanVien a[],int n)
 { 
 
 float d,c;
 NhanVien max=a[0];
 
 for(int i=0;i<n-1;i++){
 	
    for(int j=i+1;j<n;j++){
    	 
    	 d = a[i].Luong_Thang+a[i].Phu_Cap;
    	 c = a[j].Luong_Thang+a[j].Phu_Cap;
    	 if (c>=d){max = a[j];}
 	
 }
 }
 cout<<"\n\t\t\t\t========>>THONG TIN CUA NGUOI CO THU NHAP CAO NHAT LA <<======="<<endl;
          cout<<"\n";
          Taobang();
          cout<<"|";
	cout<<setw(20)<<max.Ma_nv<<"|";
	cout<<setw(20)<<max.Ho_va_Ten<<"|";
	cout<<setw(20)<<max.SDT<<"|";
	cout<<setw(20)<<max.LCB<<"|";
	cout<<setw(19)<<max.HE_SO<<"|";
	cout<<setw(20)<<max.Phu_Cap<<"|";
	cout<<endl;

cout << "+============================================================================================================================================================+\n";
	
 }
//TONG LUONG CONG TY PHAI TRA
float TongLuongphaitra_7 (NhanVien a[],int n)
{int s=0;
for(int i=0;i<n;i++){

s=s+a[i].Thu_Nhap;

}  
cout<<"\t\t+===========================================================+\n";
cout<<"\t\t|TONG LUONG PHAI TRA CHO NHAN VIEN LA:"<<s<<endl;
cout<<"\t\t+===========================================================+\n";
}

//SO SANH HE SO LUONG VS HS NHAP TU BAN PHIM
void sosanh_heso_8(NhanVien a[],int n)
{
float hs;
cout<<"\n======>>Nhap HS:";
cin>>hs;
cout<<"\n\t\t\t========>>THONG TIN CUA NGUOI CO HE SO LUONG > hs LA: <<======="<<endl;
cout<<"\n"<<endl;
Taobang();
	
for(int i=0;i<n;i++)
{
if(a[i].HE_SO>hs)
{
          cout<<"|";
	cout<<setw(20)<<a[i].Ma_nv<<"|";
	cout<<setw(20)<<a[i].Ho_va_Ten<<"|";
	cout<<setw(20)<<a[i].SDT<<"|";
	cout<<setw(20)<<a[i].LCB<<"|";
	cout<<setw(19)<<a[i].HE_SO<<"|";
	cout<<setw(20)<<a[i].Phu_Cap<<"|";
          cout<<endl;  
          
                                                                                                                                                         
cout << "+============================================================================================================================================================+\n";}

       else if(a[i].HE_SO<hs)      
{
       	 cout<<"|";
	cout<<setw(20)<<"KHONG";
	cout<<setw(20)<<"KHONG";
	cout<<setw(20)<<"KHONG";
	cout<<setw(20)<<"KHONG";
	cout<<setw(19)<<"KHONG";
	cout<<setw(20)<<"KHONG";
cout<<"====>>\t\n\t========>>KHONG CO AI<<======="<<endl;
          cout<<endl;  
                                                                                                                                                                   
cout << "+============================================================================================================================================================+\n";}

       	
}		
}

	
 
int main()
{ int o;

while(true)
{
	cout<<"\n\n";
	cout<<"+====================================================================================================+"<<endl;
	cout<<"|					MENU					  			|"<<endl;
	cout<<"+====================================================================================================+"<<endl;
	cout<<"+		1. Nhap danh sach nhan vien								+"<<endl;
	cout<<"+		2. In ra danh sach nhan vien theo dang bang						+"<<endl;
	cout<<"+		3. Tinh luong thang cua nhan vien							+"<<endl;
	cout<<"+		4. Tinh thu nhap cua nhan vien								+"<<endl;
	cout<<"+		5. Sap xep nhan vien theo thu tu tang dan ve he so luong				+"<<endl;
	cout<<"+		6. In ra thong tin nguoi co thu nhap cao nhat						+"<<endl;
	cout<<"+		7. In thong tin tong luong phai tra cho nhan vien cua cong ty la			+"<<endl;
	cout<<"+		8. In ra danh sach cac nhan vien co he so luong > hs 					+"<<endl;
	cout<<"+		9. Luu danh sach nhan vien ra tep nv.dat						+"<<endl;
	cout<<"+		10.Doc danh sach nhan vien tu tep nv.dat va ke xuat thong tin tren man hinh		+"<<endl;
	cout<<"+		0. Thoat										+"<<endl;
	cout<<"+====================================================================================================+"<<endl;
	
	cout<<"{\\__/}"<<endl;
	cout<<"( ._.)"<<endl;
	cout<<"/>  VUI LONG NHAP SO DE THUC HIEN YEU CAU:  ";cin>>o;

           int n;
           NhanVien a[100];
	switch(o)
{
	
case 1:{
cout<<"Moi ban so luong nhan vien:";
do{
        cin>>n;
           if(n<0||n>3)
        cout<<"\nVui long nhap lai!! ";	
  }while(n<0||n>3);
Nhap_1(a,n);
break;
    }
    
    
       
case 2   :{
In_danh_sach_2(a,n);
break;
}
case 3:{
      Tinh_Luong_Thang_3(a,n);
      break;	
}

case 4:
{
Tinh_Thu_Nhap_4(a,n);
break;	
}
case 5:
{cout<<"\n\t	He so luong sap xep theo thu tu tang dan la:"; Sapxep_5(a,n);
           break;
}
case 6:  {
            INFOR_MAXX_6(a,n);
            break;
         }
case 7:
         {
             TongLuongphaitra_7(a,n);
             break;

         }
case 8:
         {
              sosanh_heso_8(a,n);
              break;
         }



}
}
}

