
#include <stdio.h>

int main(){
    int bil1=0, bil2=0, total=0;
    int menu=0;
    
    printf("bil1 :\n");
    scanf("%d",&bil1);

    printf("bil2 :\n");
    scanf("%d",&bil2);
    
    printf("Menu matematika :\n");
    printf("1. Penjumlahan :\n");
    printf("2. Pengurangan :\n");
    printf("3. Pembagian :\n");
    printf("4. Perkalian :\n");
    printf("Masukkan angka menu :\n");
    scanf("%d",&menu);
    
    if(menu == 1){
        total = bil1 + bil2;
    }
    else if(menu==2){
        total = bil1 - bil2;
    }
    else if(menu==3){
        total = bil1 / bil2;
    }
    else if(menu==4){
        total = bil1 * bil2;
    }
   
   printf("Hasil proses : %d ", total);


    return 0;
}