#include<iostream>
using namespace std;

int main(){
	// bài tâp if else 
	// viet truong trinh nhap thu trong tuan 
	// bài 1 
/*	int n ; 
	cout << "\nNhap thu trong tuan " ;
	do{
		cin >> n ;
		if( n < 2 || n > 7){
			cout << "\nNhap lai di b oi " ;
		}
	}while( n < 2  || n > 7 ) ;
if( n==2 ){
	cout << "\nMonday " ;
}else if(n == 3){
	cout << "\nTusday " ; 
}else if(n == 4){
	cout << "\nWednesday " ;
}else if(n == 5){
	cout << "\nThursday " ; 
}else if(n == 6){
	cout << "\nFirday " ;
}else{
	cout << "\nSaturday " ;
}
return 0;
}
*/
//BAi 2 
//viet truong trinh cho phep nhap so kw 
// Tinh kw ròi in ra màn hinh 
/*
int soKw ;
float thanhTien = 0 ;
cout << "\nNhap so Kw dien thieu thu " ;
do{
	cin >> soKw ;
	if( soKw <= 0 ){
		cout << "\nNhap sai r nha ! " ;
		cout << "\nDien lai di " ;
	}
}while( soKw < 0 ) ;
if( soKw < 0 || soKw <=100 ) {
	thanhTien = soKw * 2000 ;
}else if( soKw < 200 ){
	thanhTien = 100 * 2000 + ( soKw - 100 ) * 2500 ;
}else if( soKw < 300 ){
	thanhTien = 100 * 2000 + 100 * 2500 + ( soKw - 200 ) * 3000 ;
}else{
	thanhTien = 100 * 2000 + 100 * 2500 + 100 * 3000 + ( soKw - 300) * 5000 ;
}
cout << "\nTong so tien dien cua chu nha la : " << thanhTien << " Dong " ;
return 0;
}
*/
// Bài tâp vong lap for 
// Bài 1 
// viet truong trinh tinh tich p=2*4*6.....2n ;
/*
int n ; 
float tinhTich = 1 ;
cout << "\nNhap 1 so vao di ! " ; 
	cin >> n ; 
	for ( int i = 1 ;i < n ; i ++ ){
		tinhTich = tinhTich * (2 * i);  
	}
	cout << "\nTich cua phuong trinh p=2*4*6.....2n la : " << tinhTich ;
	return 0; 
}
*/
// Bài 2 
// viet truong trinh ve hinh TAm giac bang *
/*
int chieuCao;
cout << "\nNhap chieu Cao " ;
do{
	cin >> chieuCao ; 
	if ( chieuCao < 0 ){
		cout << "\nChieu cao lam gi co âm " ;
		cout << "\nNhap lai de " ; 
	}
}while( chieuCao < 0 );
for ( int i = 1 ; i < chieuCao ; i ++ ){
	for ( int j =1 ; j < i ; j++ ){
		cout << " * " ;
	}
	cout<<" * " <<endl;
}
cout << endl;
return 0 ;
}
/*

