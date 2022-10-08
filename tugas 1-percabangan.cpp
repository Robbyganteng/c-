#include<iostream>
using namespace std;

int main(){
	int jumlah;
	cout<<"jumlah buku yang anda pinjam = ";
	cin>>jumlah;
	
	if(jumlah< 2){
		cout << " buku telah berhasil dipinjam " <<endl;
	}else {
		jumlah;
		cout << "tidak dapat meminjam lebih dari 2 buku " <<endl;
	}
}
