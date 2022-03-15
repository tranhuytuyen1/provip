#include <iostream> 
#include <fstream>
using namespace std;

main () { 
	fstream  doctep ( "in1.txt" ,  ios  ::  in ); 
	int  a [ 5 ]; 
	cout << " \ n DOC TEP" << endl ;
	
	for ( int  i = 0 ; i < 5 ; i ++ ) { 
		cout << " \ n a [" << i + 1 << "] =" ; 
		doctep >> a [ i ]; 
		cout << a [ i ] << "" ; 
	} 
	int  min  =  a [ 0 ],  max  =  a [ 0 ]; 
	for ( int i = 0 ; i < 5 ; i ++ ) 
	{ 
		if ( min  >  a [ i ]) { 
			min  =  a [ i ]; 
		} 
		if ( max  <  a [ i ]) { 
			max  =  a [ i ]; 
		} 
	} 
	cout << " \ n \ n MIN =" << min << " \ t MAX =" << max <<endl ;
	
	ofstream  ghitep ( "out1.txt" ,  ios :: out );
	
	ghitep  <<  " \ n MIN ="  <<  min  <<  " \ t MAX ="  <<  max ; 
	cout << " \ n GHI TEP THANH CONG" << endl ; 
}
