#include <iostream>
using namespace std;

int main() {
    string nama,sekolah,ulong;
    do{
    cout<<"masukkan nama "<<endl;
    cin>>nama;
    cout<<"masukkan nama sekolah ";
    cin>>sekolah;
    cout<<"namamu adalah ";
    cout<<nama<<endl;
    cout<<"sekolahmu di ";
    cout<<sekolah<<endl;
        cout<<"Apakah andan ingin mengulang?.Tekan y/Y";
        cin>>ulong;
    }
       while (ulong=="y"||ulong =="Y");
    system("pause");
    return 0;
}
