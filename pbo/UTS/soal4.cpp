// 20200801265 - Luthfi Fauzan - UTS - PBO
// Jawaban No. 4
#include <iostream>
using namespace std;

class input{
	public:
		string a,b,c;
		void inp(){
			cout<<"\nMasukkan First name :";
			cin>>a;
			cout<<"Masukkan Middle Name :";
			cin>>b;
			cout<<"Masukkan Last Name :";
			cin>>c;
			cout<<"FULL NAME : " ;
			cout<<a<<" "<<" "<<b<<" "<<c<<endl;
		}
		};
int main(){
//mendeklarasikan menu agar dapat dilakukan ulang
menu :
   int a;
   char c;
   cout << "Menu " << endl;
   cout << "0. Keluar"<<endl;
   cout << "1. input"<<endl;
   cout << "Pilih : ";
   cin>> a;
//membuat penyeleksian antara 0 dan 1   
if(a==0){
  	cout<<"\nthanks";}
//jika memilih 1 maka class input akan dipanggil
  else if(a==1){
  	input b;
  	b.inp();
//jika pengguna ingin memasukkan kembali biodatanya 
  	cout<<"\ningin ke awal (y/t) : ";
	cin>>c;
	if (c=='y'||c=='Y'){
	goto menu;}
	else if (c=='t'||c=='T'){
	cout<<"\nThanks ";
    exit(0);}
  }
  }


