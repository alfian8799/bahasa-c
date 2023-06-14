#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa
{
    int NRP;
    char nama[30];
    char kota[30];
};

void binaryinsertSort(struct Mahasiswa data[], int size)
{
    int i, j, l, r, m;
    struct Mahasiswa x;
    for (i = 0; i < size; i++)
    {
        x = data[i];
        l = 0;
        r = i - 1;
        while (l <= r)
        {
            m = (l + r) / 2;
            if (x.NRP < data[m].NRP)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        for (j = i - 1; j >= l; j--)
        {
            data[j + 1] = data[j];
        }
        data[l] = x;
    }
}

int main()
{
    struct Mahasiswa mhs[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Masukkan Mahasiswa Ke %d :\n", i + 1);
        printf("NRP : ");
        scanf("%d", &mhs[i].NRP);
        printf("Nama : ");
        scanf("%s", mhs[i].nama);
        printf("Kota : ");
        scanf("%s", mhs[i].kota);
    }

    printf("Data Sebelum Terurut:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Mahasiswa Ke %d:\n", i + 1);
        printf("NRP : %d\nNama : %s\nKota : %s\n", mhs[i].NRP, mhs[i].nama, mhs[i].kota);
    }

    binaryinsertSort(mhs, 5);

    printf("\nData Setelah Diurut:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Mahasiswa Ke %d:\n", i + 1);
        printf("NRP : %d\nNama : %s\nKota : %s\n", mhs[i].NRP, mhs[i].nama, mhs[i].kota);
    }

    return 0;
}

