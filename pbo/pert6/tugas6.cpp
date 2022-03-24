#include <iostream>

using namespace std;

class waktu{
    private : 
    int jam , menit , detik ;

    public : 
    int getjam(){
        return jam;}

    void setjam(int j){
        if ((j>=0 && j<24))
        {jam = j;}
        else{cout<<"yang dimasukkan salah";}
        }

    int getmenit(){
        return menit;}
    
    void setmenit(int m){
        if (m>=0 && m<=59)
        {menit = m;}
        else{cout<<"yang dimasukkan salah";}
    }
    
    int getdetik(){
        return detik;}

    void setdetik(int d){
        if (d>=0 && d<=59)
        {detik = d;}
        else{cout<<"yang dimasukkan salah";}}
    
    };

int main(){
waktu t;
t.setjam(19);
t.setmenit(40);
t.setdetik(59);
cout<<t.getjam()<<":"<<t.getmenit()<<":"<<t.getdetik()<<endl;
return 0;
}
