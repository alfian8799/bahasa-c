#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Mahasiswa
{
    int NRP;
    char nama[20];
    char kota[20];
};
int sequentialSearch(struct Mahasiswa data[],int x)
{
    int i = 0;
    bool ketemu = false;

    while ((!ketemu)&&(i<3))
    {
        if (data[i].NRP == x)
        {
            ketemu = true;
        }
        else
        {
            i++;
        }
    }
    if (ketemu)
    {
        return i;
    }
    else
    {
        return -1;
    }
}
int main()
    {
        struct Mahasiswa mhs[3];
        int i;
        for ( i = 0; i < 3; i++)
        {
        printf("Masukkan Mahasiswa Ke %d :\n", i + 1);
        printf("NRP : ");
        scanf("%d", &mhs[i].NRP);
        printf("Nama : ");
        scanf("%s", mhs[i].nama);
        printf("Kota : ");
        scanf("%s", mhs[i].kota);
        }
        for ( i = 0; i < 3; i++)
        {
            printf("NRP : %d, Nama : %s, Kota : %s\n", mhs[i].NRP,mhs[i].nama,mhs[i].kota);
        }
        int Kunci;
        printf("\nMasukkan NRP : ");
        scanf("%d",&Kunci);
        int ketemu = sequentialSearch(mhs, Kunci);
        if (ketemu>0)
        {
            printf("Data ditemukan pada posisi %d",ketemu+1);
            printf("\nNRP : %d, Nama : %s, Kota : %s", mhs[ketemu].NRP,mhs[ketemu].nama,mhs[ketemu].kota);
        }
        else
        {
            printf("Data tidak ditemukan");
        }
    }

