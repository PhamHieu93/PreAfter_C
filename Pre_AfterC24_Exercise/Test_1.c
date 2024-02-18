#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
bool check (int n, bool check_n)
{
    if (n < 0 || n > 16)
    check_n = false;
    else check_n = true;

    return check_n;
}
int main()
{
    int n;
    bool x;
    printf(" \n Nhap n ");
    scanf("%d", &n);

    while (!check(n, x))
    {
        printf(" Khong thoa man, yeu cau nhap lai n \n");
        scanf("\n%d", &n);
        check(n, x);
    }

    uint64_t arr[n];
    printf(" Nhap gia tri tung phan tu \n");
    for (int i = 0; i < n; i++)
    {
        scanf("\n%d", &arr[i]);
    }

    printf(" Gia tri tung phan tu \n");
    for (int i = 0; i < n; i++)
    {
        printf(" arr[%d", i);
        printf("]= %d\n", arr[i]);
    }

    printf(" Dia chi tung phan tu \n");
    for (int i = 0; i < n; i++)
    {
    printf(" arr[%d", i);
    printf("]= %d\n", &arr[i]);
    }
    return 0;
}