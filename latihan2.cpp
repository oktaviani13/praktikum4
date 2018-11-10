#include <iostream>
using namespace std;
int main ()
{
    cout<< "Tugas praktikum4"<< "program Menghitung Total pembayaran"<< endl;
    cout<< "========================================================" <<endl;
    int jumlah_beli=0,total_beli=0,x,y,a;
    long int
    harga=0,harga_barang=0,total=0,bayar=0,diskon;
    cout<< "masukan jumlah barang (N):"; cin>>y;
    x=1;

    while(x<=y)
    {
        cout<< "barang Ke-"; cin>>a;
        cout<< "masukan banyaknya barang: "; cin>>jumlah_beli;
        cout<< "masukan harga barang:Rp"; cin>>harga;
        harga_barang = harga*jumlah_beli;
        total=total + harga_barang;
        total_beli += jumlah_beli;
        x++;
    }
    if(total>=10000000)
    {

        diskon=total*10/100;
    }
    else if (total>500000&&total<1000000)
    {

        diskon=total*5/100;
    }else{
     diskon=0;
    }
    cout<< "====================================================" <<endl;
    bayar=total-diskon;
    cout<< "Total Barang Yang di Beli : "<<total_beli<<endl;
    cout<< "Total Semua Pembelian :Rp"<<total<<endl;
    cout<< "Mendapatkan Diskon Sebesar :Rp"<<diskon<<endl;
    cout<< "Total Yang Harus Di Bayar =Rp"<<bayar<<endl;
}



