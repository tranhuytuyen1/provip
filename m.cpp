#include <iostream> 
#include <math.h>


void  nhap_mang ( int  a [],  int  n ) { 
	cout  <<  " \ n Nhap phan tu mang: \ n " ; 
	for ( int  i  =  0 ;  i  <  n ;  i ++ ) { 
		cout  <<  "Phan tu thu"  <<  i  +  1  <<  "la:" ; 
		cin  >>  a [ i ]; 
	} 
}

void  hien_thi_mang ( int  a [], int  n ) { 
	cout << " \ n Hien thi mang: \ n " ; 
	for ( int  i  =  0 ;  i  <  n ;  i ++ ) { 
		cout << "a [" <<  i  +  1  << "] =" << a [ i ] << "; \ t " ; 
	} 
	cout << "; 
}

void  xapxep_tangdan ( int  a [], int  n ) { 
	int  tg ; 
	for ( int  i  =  0 ; i < n ;  i ++ ) { 
		for ( int  j  =  i + 1 ; j  <  n ; j ++ ) { 
			if ( a [ i ]  >  a [ j ]) { 
				tg  =  a [ tôi]; 
				a [ i ]  =  a [ j ]; 
				a [ j ]  =  tg ; 
			} 
		} 
	}
	
}

void  xapxep_giamdan ( int  a [], int  n ) { 
	int  tg ; 
	for ( int  i  =  0 ; i < n ;  i ++ ) { 
		for ( int  j  =  i + 1 ; j  <  n ; j ++ ) { 
			if ( a [ i ]  <  a [ j ]) { 
				tg  =  a [ tôi]; 
				a [ i ]  =  a [ j ]; 
				a [ j ]  =  tg ; 
			} 
		} 
	}
	
}

void  tbc_sochan ( int  a [], int  n ) { 
	int  dem  =  0 ; dôi  s = 0 ; 
	for ( int  i =  0 ; i  <  n ; i ++ ) { 
		if ( a [ i ]  %  2  ==  0 ) { 
			s + = a [ i ]; 
			dem ++ ; 
		} 
	} cout  << "trung binh cong cac so chan trong mang:"  <<  s / double ( dem ) <<  endl ; 
}

void  so_am ( int  a [], int  n ) { 
	for ( int  i  =  0 ; i  <  n ;  i ++ ) { 
		if ( a [ i ]  <  0 ) { 
			cout  <<  a [ i ]  <<  " \ t " ; 
		} 
	} cout  <<  endl ;
	
}

void  so_chinhphuong ( int  a [], int  n ) { 
	for ( int  i  =  0 ; i  <  n ;  i ++ ) { 
		float  x , y ; 
		x  =  sqrt ( a [ i ]); 
		y  =  int ( x ); 
	if ( x == y ) { 
		cout  <<  a [ i ]  <<  " \ t" ; 
	} 
	} cout  <<  endl ; 
}

int  main () { 
	int  n ,  a [ 100 ]; 
	int  s  =  0 ; int  tg ; int  co  =  1 ; 
	cout << "Nhap so luong mang:" ; cin >> n ; 
	nhap_mang ( a , n ); 
	hien_thi_mang ( a , n ); 
	xapxep_tangdan ( a , n ); 
	cout  <<  "ham sau khi sap xep tang dan:\ n " ; 
	hien_thi_mang ( a , n ); 
	xapxep_giamdan ( a , n ); 
	cout  <<  " ham sau khi xap xep giam dan: \ n " ; 
	hien_thi_mang ( a , n ); 	
	tbc_sochan ( a , n ); 
	cout  < <  "cac so am la: \ n " ; 
	so_am ( a , n ); 
	cout  <<  "so chinh phuong trong mang la:" ;
	so_chinhphuong ( a , n );
	
}

