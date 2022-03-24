// tugas PBO //
// Nama kelompok :
// muhammad fahri ramadan
// luthfi fauzan
// azis eko
// ubaedillah rohman
// abdul aziz setiawan
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class plant{
    public:
    int statustumbuh;
    int jumlahair=0;
    int jumlahpupuk=0; 
};
class mawar : public plant{
     public:
void beriair(){
    jumlahair++;
    kondisiTumbuh();
}
void beripupuk(){
    jumlahpupuk++;
    kondisiTumbuh();
}
void kondisiTumbuh(){
    if(jumlahair >=2 && jumlahpupuk >=1){
        tumbuh();
    }
}
void tumbuh(){
    if(statustumbuh<4){
        jumlahair = jumlahair-4;
        jumlahpupuk = jumlahpupuk-2;
        statustumbuh++;
    }
}
void print(){
	cout<<"hasil : "<<statustumbuhtext()<<endl;
    cout<<"jumlah air : "<<jumlahair<<endl;
    cout<<"pupuk : "<<jumlahpupuk<<endl;
}
string statustumbuhtext(){
    switch(statustumbuh){
        case 0:
        return "benih";
        case 1:
        return "tunas";
        case 2:
        return "tanaman kecil";
        case 3:
        return "tanaman dewasa";
    }
    return "berbunga";
}
int gettumbuh(){
    return statustumbuh;
}
string getimage(){
    string timagepath = "img/seed.png";
    switch(statustumbuh){
        case 0:
        timagepath = "img/seed.png";
        break;
        case 1:
        timagepath = "img/sprout.png";
        break;
        case 2:
        timagepath = "img/small.png";
        break;
        case 3:
        timagepath = "img/big.png";
        break;
        case 4:
        timagepath = "img/blossom.png";
        break;
    }
    return timagepath;
}	
};
class melati : public plant {
    public:
void beriair(){
    jumlahair++;
    kondisiTumbuh();
}
void beripupuk(){
    jumlahpupuk++;
    kondisiTumbuh();
}
void kondisiTumbuh(){
    if(jumlahair >=3 && jumlahpupuk >=1){
        tumbuh();
    }
}
void tumbuh(){
    if(statustumbuh<4){
        jumlahair = jumlahair-5;
        jumlahpupuk = jumlahpupuk-3;
        statustumbuh++;
    }
}
void print(){
	cout<<"hasil : "<<statustumbuhtext()<<endl;
    cout<<"jumlah air : "<<jumlahair<<endl;
    cout<<"pupuk : "<<jumlahpupuk<<endl;
}
string statustumbuhtext(){
    switch(statustumbuh){
        case 0:
        return "benih";
        case 1:
        return "tunas";
        case 2:
        return "tanaman kecil";
        case 3:
        return "tanaman dewasa";
    }
    return "berbunga";
}
int gettumbuh(){
    return statustumbuh;
}
string getimage(){
    string timagepath = "img/seed.png";
    switch(statustumbuh){
        case 0:
        timagepath = "img/seed.png";
        break;
        case 1:
        timagepath = "img/sprout.png";
        break;
        case 2:
        timagepath = "img/small.png";
        break;
        case 3:
        timagepath = "img/big.png";
        break;
        case 4:
        timagepath = "img/blossom.png";
        break;
    }
    return timagepath;
}	
};
int main(){
	int pil;
	int p;
	int inp;
	melati a;
	mawar b;
	menu:
	cout<<"masukkan bunga\n"; 
	cout<<"1. melati\n"; 
	cout<<"2. mawar "<<endl;
	cout<<"3. Keluar\n";
	cout<<"pilihan : "; 
	cin>>pil;
		if (pil==1){
		submenu1:
		cout<<"1. Beri Air \n";
		cout<<"2. Beri Pupuk \n";
		cout<<"3. Kembali ke menu\n";
		cout<<"pilihan : ";
		cin>>p;
			if(p==1){
            a.beriair();
			a.print();}
            else if(p==2){
			a.beripupuk();	
			a.print();}
            else if(p==3) 
			{goto menu;}
			goto submenu1;}
		
			
        else if(pil==2){
        		submenu2:
		cout<<"1. Beri Air \n";
		cout<<"2. Beri Pupuk \n";
		cout<<"3. Kembali ke menu\n";
		cout<<"pilihan : ";
		cin>>p;
			if(p==1){
            b.beriair();
			b.print();}
            else if(p==2){
			b.beripupuk();	
			b.print();}
            else if(p==3) 
			{goto menu;}
			goto submenu2;}
		else if(pil==3){
			exit (0);
		}
		else{
			cout<<"Pilihan Tidak Ada !!!!\n";
			goto menu;
		}
	}

