#include <iostream>
using namespace std;
int main(){
	int kqt; 
	int i=1; 
	int dem=0;
  while(i <= 10){
	cout<<"ket qua thi cua ban thu "<<i <<" la: "; 
	cin>>kqt;}
	if ((kqt < 1) || (kqt > 2)){	
  do{
   cout<<"nhap lai ket qua thi cua ban thu "<<i<<" la: "; 
   cin>>kqt;
   } while((kqt < 1) || (kqt > 2));
}
	if(kqt == 1) { 
	cout<<" do "<<i<<endl; dem++;
	cout<<endl; 
}else{ 
cout<<"truot"<<i<<endl; 
}
	if(dem > 8) cout<<"tang tien hoc phi \n";
 
	return 0;
}	
