#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
bool check (int n, bool check_n)
{
    if ( n < 6)
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

    float arr[n];
    printf(" Nhap gia tri tung phan tu \n");
    for (int i = 0; i < n; i++)
    { 
    scanf("\n%f", &arr[i]);
    }

    float aver = 0;
    for (int i = 0; i < n; i++)
    {
        aver = aver + arr[i];
    }
    printf(" \n Gia tri trung binh cua mang la %.3f\n", aver/n);
}