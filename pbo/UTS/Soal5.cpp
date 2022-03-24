// 20200801265 - Luthfi Fauzan - UTS - PBO
// Jawaban No. 5
#include <iostream>
using namespace std;

int main(){
	int n,j,i,s;
	cout<<"masukan baris :";
	cin>>n;
   
	for (i=1;i<=n;i++){
		for(s=1;s<n;s++)
		cout<<" ";
		for (j=1;j<=i;j++)
		cout<<"*";
		cout<<"\n";
	}return 0;
}