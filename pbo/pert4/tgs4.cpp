#include <iostream>

using namespace std;
//membuat class private dan public
class umur{
    private:
    //mendeklarasikan integer
    int a, b;

    public:
    //membuat void dan memasukkan parameter integer tahun lahir dan tahun sekarang
    void assign(int tahunlahir, int tahunsekarang){
        a=tahunlahir;
        b=tahunsekarang;
    }
    //menghitung usia dan mengembalikan nilai 
    int usia(){
        return a-b;
    }
    
};

int main(){    
//memanggil class umur
    umur obj;
//memasukkan nilai pada objek assign
    obj.assign(2021, 2000);
//mencetak hasil pengurangan dengan memanggil objek usia
    cout<<"Berarti Usia Kalian sekarang adalah "<<obj.usia()<<" Tahun"<<endl;
    return 0;
}