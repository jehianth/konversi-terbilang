#include <iostream>

char nilai[][10] = {{" "},{"satu "},{"dua "},{"tiga "},{"empat "},{"lima "},{"enam "},{"tujuh "},{"delapan "},{"sembilan "}};

//Jika ingin menggunakan struct

/*typedef struct kata{
    char *puluhjuta; //menggunakan pointer karena bertipe data string yang akan di inputkan
    char *juta;
    char *ratusrb;
    char *puluhrb;
    char *belas;
    char *ribu;
    char *ratus;
};*/

void printnilai(char a[][10],int n){
    printf ("%s",a[n]);
}

void konversi(int n){
    int puluhjuta,juta,ratusrb,puluhrb,ribu,ratus,puluh,satuan;

    //modulus 1 angka setelahnya agar mendapatkan angka sisa bagi yang dinginkan
    //di bagi dengan jumlah 0 di rentang angka yang sama untuk mengambil angka indeks di array nilai[]

    puluhjuta = n%100000000;
    puluhjuta = puluhjuta/10000000;
    
    juta      = n%10000000;
    juta      = juta/1000000;
    
    ratusrb   = n%1000000;
    ratusrb   = ratusrb/100000;
    
    puluhrb   = n%100000;
    puluhrb   = puluhrb/10000;
    
    ribu      = n%10000;
    ribu      = ribu/1000;
    
    ratus     = n%1000;
    ratus     = ratus/100;
    
    puluh     = n%100;
    puluh     = puluh/10;
    
    satuan    = n%10;

    if (puluhjuta>1){
        printnilai(nilai,puluhjuta);
        printf ("puluh juta ");
    }
    /*if (puluhjuta>1 && juta <=0){
        printf ("juta ");
    }*/
    if(puluhjuta==1 && juta==1){
        printf("sebelas juta ");
    }
    if(puluhjuta==1 && juta>1){
        printnilai(nilai,juta);
        printf ("belas juta ");
    }
    if (puluhjuta==1 && juta<=0){
        printf ("sepuluh juta ");
    }
    if(puluhjuta>1 && juta>=1){
        printnilai(nilai,juta);
        printf ("juta ");
    }
    if(puluhjuta<1 && juta>=1){
        printnilai(nilai,juta);
        printf ("juta ");
    }
    if(ratusrb==1){
        printf ("seratus ribu ");
    }
    if (ratusrb >1 && puluhrb>0){
        printnilai(nilai,ratusrb);
        printf ("ratus ");
    }
    if(ratusrb>1 && puluhrb == 0){
        printnilai(nilai,ratusrb);
        printf("ratus ribu ");
    }
    if (puluhrb==1 && ribu<=0){
        printf("sepuluh ");
    }
    if (puluhrb>1){
        printnilai(nilai,puluhrb);
        printf("puluh ");
    }
    if (puluhrb>=1&&ribu<=0){
        printf("ribu ");
    }
    if(puluhrb==1 && ribu==1){
        printf("sebelas ribu ");
    }
    if(puluhrb==1 && ribu>1){
        printnilai(nilai,ribu);
        printf ("belas ribu ");
    }
    if (puluhrb<=0&&ribu==1){
        printf("seribu ");
    }
    if(ribu >=1 && puluhrb>1){
        printnilai(nilai,ribu);
        printf ("ribu ");
    }
    if(ribu >1 && puluhrb<=0){
        printnilai(nilai,ribu);
        printf ("ribu ");
    }
    if (ratus==1){
        printf ("seratus ");
    }
    if (ratus>1){
        printnilai(nilai,ratus);
        printf ("ratus ");
    }
    if (puluh==1 && satuan <=0){
        printf("sepuluh ");
    }
    if (puluh>1){
        printnilai(nilai,puluh);
        printf ("puluh ");
    }
     if(puluh==1 && satuan==1){
        printf("sebelas ");
    }
    if(puluh==1 && satuan>1){
        printnilai(nilai,satuan);
        printf ("belas ");
    }
    if (satuan>0 && puluh<1 || puluh>1){
        printnilai(nilai,satuan);
    }
    printf("rupiah\n");
}

int main(){
    int x;
    bool cari = false;
    printf("===========================\n");
    printf("Program Konversi Terbilang\n");
    printf("Masukan angka rentang 0 rupiah - 99 juta rupiah\n");
    printf("\n");
    while (cari==false){
        printf("Silakan masukan angka : ");
        scanf("%d",&x);
        if(x>99999990){
            printf("Angka yang anda masukan salah\n");
            printf ("\n");
        }
        if(x<1){
            printf("Angka yang anda masukan salah\n");
            printf ("\n");
        }
        else {
        konversi(x);
        printf("\n");
        printf("Program Selesai ^-^\n");
        printf("===========================");
        cari=true;
        }
    }
    return 0;
}
