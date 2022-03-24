// 20200801265 - Luthfi Fauzan - UTS - PBO
// Jawaban No. 6
#include <iostream>
using namespace std;

class angka{
    private :
    int n1, n2;

    public :
    void setnilai1(){
        int a;
        cout<<"Masukkan nilai 1 :";
        cin>>a;
        n1=a;
    }
    int getnilai1(){
        return n1;
    }
    void setnilai2(){
        int b;
        cout<<"Masukkan nilai 1 :";
        cin>>b;
        n2=b;
    }
    int getnilai2(){
    return n2;
    }
    int tambah(){
        return n1+n2;
        }

    int kurang(){
        return n1-n2;
    }
    int kali(){
        return n1*n2;
    }
    int bagi(){
        return n1/n2;
    }
    };
int main(){
    int pil;
    char e;
    angka a;
    menu :
    cout<<"Menu Kalkulator:"<<endl;
    cout<<"0. exit"<<endl;
    cout<<"1. tambah"<<endl;
    cout<<"2. kurang"<<endl;
    cout<<"3. kali"<<endl;
    cout<<"4. bagi"<<endl;
    cout<<"Masukkan Pilihan :";
    cin>>pil;
    if (pil==0)
    {
        exit(0);
    }
    else if (pil==1)
    {
    a.setnilai1();
    a.setnilai2();
    cout<<a.tambah();

    cout<<"\ningin ke awal (y/t) : ";
	cin>>e;
	if (e=='y'||e=='Y'){
	goto menu;}
	else if (e=='t'||e=='T'){
	cout<<"\nThanks ";
    exit(0);}
    }  
    else if (pil==2)
    {
    a.setnilai1();
    a.setnilai2();
    cout<<a.kurang();
    cout<<"\ningin ke awal (y/t) : ";
	cin>>e;
	if (e=='y'||e=='Y'){
	goto menu;}
	else if (e=='t'||e=='T'){
	cout<<"\nThanks ";
    exit(0);}
    }
     else if (pil==3)
    {
    a.setnilai1();
    a.setnilai2();
    cout<<a.kali();
    cout<<"\ningin ke awal (y/t) : ";
	cin>>e;
	if (e=='y'||e=='Y'){
	goto menu;}
	else if (e=='t'||e=='T'){
	cout<<"\nThanks ";
    exit(0);}
    }

    else if (pil==4)
    {
    a.setnilai1();
    a.setnilai2();
    cout<<a.bagi();
    cout<<"\ningin ke awal (y/t) : ";
	cin>>e;
	if (e=='y'||e=='Y'){
	goto menu;}
	else if (e=='t'||e=='T'){
	cout<<"\nThanks ";
    exit(0);}
    }
   
}
    
    
 
    


