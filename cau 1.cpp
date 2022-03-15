#include<iostream>
using namespace std;
int main(){
	int n,x,i;
	int s1=0,s2=0,t9=1,t10;
	double s3=0,s4=0,s5=0,s6=0,s7=0,s8=0;
	do{
	cout<<"\n nhap so n:"<<endl;
	cin>>n;
	if( n<1 ){
		cout<<"\n son phai lon hon hoac bang 1 , vui long nhap lai !"<<endl;
	}
}while(n<1);
for(int i=1 ;i<=n;i++){
	s1=s1+i;
}
cout<<"\ntong 1+ 2 +....n = "<<s1<<endl;
for(int i=1 ;i<=n;i++){
	s2=s2+i*i;
}
cout<<"\ntong 1^2+2^2.....+n^2 = "<<s2<<endl;
for(float i=1 ;i<=n;i++){
	s3=s3+1/i;
}
cout<<"\ntong 1+1/2+1/3+.....+1/n = "<<s3<<endl;
for(float i=1;i<=n;i++){
	s4=s4+(1/(2*i));
}
cout<<"\ntong 1/2+1/4+......+1/2n = "<<s4<<endl;
for (float i=1;i<=n;i++){
	s5=s5+(1/(2*i+1));
}
cout<<"\ntong 1+1/3+1/5......+1/2n+1 = "<<s5<<endl;
for(float i=1;i<=n;i++){
	s6=s6+(1/i*(i+1));
}
cout<<"\ntong 1/1*2+1/2*3+..+1/n(n+1) = "<<s6<<endl;
for(float i=1;i<=n;i++){
	s7=s7+(i/(i+1));
}
cout<<"\n tong 1/2+2/3+3/4+..+n/n+1 = "<<s7<<endl;
for(float i=1;i<=n;i++){
	s8=s8+((2*i+1)/(2*i+2));
}
cout<<"/ntong 1/2+3/4+...+2n+1/2n+2 = "<<s8<<endl;
for(int i=1;i<=n;i++){
	t9=t9*i;
}
cout<<"\ntong 1*2*3*...*n = "<<t9<<endl;
cout<<"nhap x "<<endl;
cin>>x;
if(n==1){
	cout<<"\n tong x^n la = "<<x<<endl;
}else{
	t10=x ;
	for(int i=1;i<=(n--);i++){
		t10=t10*x;
	}
	cout<<"\n tong x^n la = "<<t10<<endl;
}
return 0;
}
