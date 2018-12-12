#include"iostream"
using namespace std;
main(){
	int diemtoan,diemly,diemhoa;
	string tensv;
	cout << "nhap vao ten sv: ";
	cin >> tensv;
	cout << "nhap vao diem toan: ";
	cin >>diemtoan;
	cout << "nhap vao diem ly: ";
	cin >>diemly;
	cout << "nhap vao diem hoa: ";
	cin >>diemhoa;
	float diemtb = (diemtoan+diemly+diemhoa)/3;
	cout <<"diemtb la :"<< diemtb;
	if(diemtb>=8){
		cout << " xep loai sv xuat sac";
	}
	else if(diemtb>=7 && diemtb<8){
		cout << " xep loai sv gioi";
	}
	else if(diemtb>=6 && diemtb<7){
		cout << " xep loai sv kha";
	}else if(diemtb>=5 && diemtb<6){
		cout<< " xep loai sv trung binh";
	}
	else{
		cout << " xep loai thuoc sv yeu";
	}
	
	
	
	
	
	
}
