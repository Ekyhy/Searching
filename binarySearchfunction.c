#include <stdio.h>

int binarySearch(int arr[], int awal, int akhir, int cari){
    while (awal<=akhir)
    {
        int tengah = (awal+akhir)/2;

        if (arr[tengah] == cari)
        {
            return tengah;
        }else if (arr[tengah]<cari)
        {
            awal = tengah +1;
        }else
        {
            akhir = tengah -1;
        }
    }
    return 0;
}

int main(){
    int arr[7] = {2,3,4,5,6,7,8};
    int cari;
    printf("Masukkan angka yang dicari:");
    scanf("%d",&cari);
    int result = binarySearch(arr,0,6,cari);
    if (result != 0)
    {
        printf("Angka %d ditemukan pada indeks %d",cari,result);
    }else{
        printf("Angka tidak ditemukan dalam indeks, coba lagi!");  
    }
}