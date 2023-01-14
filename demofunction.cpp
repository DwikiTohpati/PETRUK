#include <iostream>

using namespace std;

void cetak(){
	cout<<"========Pilihan Mobil Yang Tersedia========="<<endl;
	cout<<"1. Avanza"<<endl;
	cout<<"2. Xenia"<<endl;
	cout<<"3. Alphard"<<endl;
	cout<<"============================================"<<endl;
	cout<<endl;
}

void pilihan(){
	int pilih,uang,hari,nama,nomor,sewa;
	bool aaa=true;
	while (aaa==true){
		cout<<"input pilihan anda 1 - 3 : ";
		cin>>pilih;
		cout<<endl;
		switch (pilih){
		case 1:
		cout<<"Mobil yang anda pilih adalah Avanza"<<endl;
		cout<<"Masukkan nama customer : ";
		cin>>nama;
		cout<<endl;
		cout<<"Masukkan Nomor Telepon customer";
		cin>>nomor;
		cout<<endl;
		cout<<"Masukkan jumlah hari yang akan disewa : ";
		cin>>hari;
		cout<<endl;
		cout<<"Nama Customer Penyewa : "<<nama;
		cout<<"Nomor telepon penyewa : "<<nomor;
		cout<<"jumlah hari yang akan disewa : "<<hari;
		cout<<"1 hari = 700.000";
		sewa = 700000 * hari;
		aaa=false;
		break;
		case 2:
		cout<<"Terimakasih telah menyewa mobil disini"<<endl;
		cout<<"silahkan mengambil kunci dan mengambil kelengkapan surat di kantor";
		cout<<"selamat anda mendapatkan bonus 1 jam penyewaan";
		aaa=false;
		break;
		case 3:
		cout<<"Terimakasih telah menyewa mobil disini"<<endl;
		cout<<"silahkan mengambil kunci dan mengambil kelengkapan surat di kantor"<<endl;
		cout<<"selamat anda mendapat hadiah bantal leher gratiss..";
		aaa=false;
		break;
		default :
			cout<<"anda harus memilih dari 3 pilihan diatas";
			break;
		}
	
	}
}
main(){
	
	cetak();
	pilihan();
}
