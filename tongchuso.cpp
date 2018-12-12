#include"iostream"
using namespace std;
main(){
  int n, tong=0;
  cout<<"Nhap n = "; cin>>n;
  while (n>0)
  {
      tong=tong+(n%10);
      n=n/10;
  }
 cout<<"Tong cac chu so la: "<<tong;

}
