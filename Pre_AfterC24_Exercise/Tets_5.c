#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

struct in_for
{
    char name[32];
    char mssv[8];
    uint8_t cource_C;
};

void input_infor(struct in_for* std_in4)
{
    printf("Nhap ten sinh vien: ");
    gets(std_in4->name);
    printf("Nhap MSSV: ");
    gets(std_in4->mssv);
    printf("Nhap so luong khoa hoc C: ");
    scanf("%d", &std_in4->cource_C);
}

void input_print(struct in_for* std_in4)
{
    printf("Thong tin sinh vien\n");
    printf("Ho va ten sinh vien: %s\n", std_in4->name);
    printf("MSSV: %s\n", std_in4->mssv);
    printf("Khoa hoc C_: %d", std_in4->cource_C);
}

int main()
{
    struct in_for std_in4;
    input_infor(&std_in4);
    input_print(&std_in4);
    return 0;
}