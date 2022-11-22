#include <iostream>
using namespace std;
#define LL long long
#define LD long double

void satuan (int a){
    if (a==1) {cout<<"Satu ";}
    if (a==2) {cout<<"Dua ";}
    if (a==3) {cout<<"Tiga ";}
    if (a==4) {cout<<"Empat ";}
    if (a==5) {cout<<"Lima ";}
    if (a==6) {cout<<"Enam ";}
    if (a==7) {cout<<"Tujuh ";}
    if (a==8) {cout<<"Delapan ";}
    if (a==9) {cout<<"Sembilan ";}
    if (a==10) {cout<<"Sepuluh ";}
    if (a==11) {cout<<"Sebelas ";}
}

void terbilang (LL b){
    if (b<=11) {satuan(b);} 
    if ((b>11) && (b<=19)){
        terbilang(b%10); 
        cout<<"Belas ";
    }   
    if ((b>=20)&&(b<=99)) {
        terbilang(b/10); 
        cout<<"Puluh "; 
        terbilang(b%10);
    } 
    if ((b>=100)&&(b<=199)) {
        cout<<"Seratus "; 
        terbilang(b%100);
    } 
    if ((b>=200)&&(b<=999)) {
        terbilang(b/100); 
        cout<<"Ratus "; 
        terbilang(b%100);
    }   
    if ((b>=1000)&&(b<=1999)) {
        cout<<"Seribu "; 
        terbilang(b%1000);
    } 
    if ((b>=2000)&&(b<=9999)) {
        terbilang(b/1000); 
        cout<<"Ribu "; 
        terbilang(b%1000);
    } 
    if ((b>=10000)&&(b<=99999)) {
        terbilang(b/1000); 
        cout<<"Ribu "; 
        terbilang(b%1000);
    } 
    if ((b>=100000)&&(b<=999999)) { 
        terbilang(b/1000); 
        cout<<"Ribu "; 
        terbilang(b%1000);
    } 
    if ((b>=1000000)&&(b<=999999999)) {
        terbilang (b/1000000); 
        cout<<"Juta "; 
        terbilang (b%1000000);
    }
    if ((b>=1000000000)&&(b<=999999999999)){ 
        terbilang (b/1000000000); 
        cout<<"Miliar "; 
        terbilang (b%1000000000);
    }
}

int main(){
    LD nilai;
    bool cari=false;
    
    while (cari==false) {
        cout<<"Input Angka: "; cin>>nilai;
        if(nilai>999999999999){
            cout<<"Angka yang anda inputkan salah" << endl; cout << endl;
        }else if(nilai<1){
            cout<<"Angka yang anda inputkan salah" << endl; cout << endl;
        }else{
            terbilang(nilai);
            cari=true;
        }
    }
    
    cout<<"Rupiah";
}
