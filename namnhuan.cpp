#include"iostream"
using namespace std;
main(){
	int nam;	
	do{
		cout << "nhap vao nam: ";
		cin >> nam;
	}
	while(nam<0);
	if((nam%400==0) || ((nam%4==0) && (nam%100!=0))){
		cout << nam << " la nam nhuan ";
	}
	else{
		cout << nam << " khong nhuan "; 
	}
}
