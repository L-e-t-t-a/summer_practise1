#include <stdio.h>
#include <locale.h>
#include "date_in_wordsh.h" //���������� ����

int func_day(day)
{
    printf("����������� ����-->");
    switch (day / 10) {
    case 0:switch (day) {
    case 0:printf("������ ��� �� i���� "); break;
    case 1:printf("�����"); break;
    case 2:printf("�����"); break;
    case 3:printf("����"); break;
    case 4:printf("��������"); break;
    case 5:printf("�'���"); break;
    case 6:printf("�����"); break;
    case 7:printf("�����"); break;
    case 8:printf("������"); break;
    case 9:printf("���'���"); break;
    }
    case 1:switch (day) {
    case 10:printf("������"); break;
    case 11:printf("����������"); break;
    case 12:printf("����������"); break;
    case 13:printf("����������"); break;
    case 14:printf("������������"); break;
    case 15:printf("�'���������"); break;
    case 16:printf("�i���������"); break;
    case 17:printf("�i��������"); break;
    case 18:printf("�i�i��������"); break;
    case 19:printf("���'���������"); break;
    }
    case 2: switch (day - 20) {
    case 0:printf("��������"); break;
    case 1:printf("�������� �����"); break;
    case 2:printf("�������� �����"); break;
    case 3:printf("�������� ����"); break;
    case 4:printf("�������� ��������"); break;
    case 5:printf("�������� �'���"); break;
    case 6:printf("�������� �����"); break;
    case 7:printf("�������� �����"); break;
    case 8:printf("�������� ������"); break;
    case 9:printf("�������� ���'���"); break;
    }
    case 3: switch (day - 30) {
    case 0:printf("��������"); break;
    case 1:printf("�������� �����"); break;
    }
    }
    return 0;
}

int func_month(month)
{
    switch (month) {
    case 0: printf("������ �i���� �� i���� "); break;
    case 1: printf(" �i���\n"); break;
    case 2: printf(" ������\n"); break;
    case 3: printf(" �������\n"); break;
    case 4: printf(" ��i���\n"); break;
    case 5: printf(" ������\n"); break;
    case 6: printf(" ������\n"); break;
    case 7: printf(" �����\n"); break;
    case 8: printf(" ������\n"); break;
    case 9: printf(" �������\n"); break;
    case 10: printf(" ������\n"); break;
    case 11: printf(" ���������\n"); break;
    case 12: printf(" ������\n"); break;
    }
    return 0;
}