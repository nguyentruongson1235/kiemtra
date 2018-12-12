#include"iostream"
using namespace std;
main(){
	int n,s=1;
	cout << "nhap vao so: ";
	cin >> n;
	for(int i;i<=n;i++){
		s*=i;
	}
	cout <<"giai thua cua n la "<<s;
}
