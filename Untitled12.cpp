#include<iostream>
using namespace std;
int main(){
	int thang;
	int nam;
		if(thang<=0&&thang>12){
	cout<<"nhap thang  "<<endl;
	cin>>thang;
	}else
	cout<<"nhap sai roi b oi "<<endl;
	switch (thang){
		case 4:
		case 6:
		case 9:
		case 11: 
		cout<<"\nthangco 30 ngay "<<endl;
		break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		cout<<"\nthang co 31 ngay "<<endl;
		break;
		case 2:
        if (nam)
            cout<<"\nthang co 29 ngay "<<endl;
        else
            cout<<"\nthang co 28 ngay "<<endl;
    default:
        cout << "So thang nhap khong hop le"<<endl; 
}
return 0;
}
