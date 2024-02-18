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


    int arr[n];
    printf(" Nhap gia tri tung phan tu \n");
    for (int i = 0; i < n; i++)
    {
        scanf("\n%d", &arr[i]);
    }

    int maxi = arr[0];
    int mini = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mini)
            mini = arr[i];
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    printf(" \n Gia tri lon nhat trong mang la %d\n", maxi);
    printf(" Gia tri be nhat trong mang la %d\n", mini);
}