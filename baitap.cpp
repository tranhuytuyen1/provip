#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	cout<<"nhap x ,y, x"<<endl;
	cin>>x>>y>>z;
	if(x>y&&x>z){
		cout<<"so nguyen lon nhat la"<<x<<endl;
	}else if(y>x&&y>z){
		cout<<"so nguye lon nhat la"<<y<<endl;
	}else{
		cout<<"so nguyen lon nhat la"<<z<<endl;
	}
	return 0;
}
