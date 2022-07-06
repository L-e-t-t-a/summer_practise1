#include <stdio.h>
#include <locale.h>
#include "date_in_wordsh.h" //заголовний файл

int func_day(day)
{
    printf("ѕеретворена дата-->");
    switch (day / 10) {
    case 0:switch (day) {
    case 0:printf("“акого дн€ не iснуе "); break;
    case 1:printf("перше"); break;
    case 2:printf("друге"); break;
    case 3:printf("третЇ"); break;
    case 4:printf("четверте"); break;
    case 5:printf("п'€те"); break;
    case 6:printf("шосте"); break;
    case 7:printf("сьоме"); break;
    case 8:printf("восьме"); break;
    case 9:printf("дев'€те"); break;
    }
    case 1:switch (day) {
    case 10:printf("дес€те"); break;
    case 11:printf("одинадц€те"); break;
    case 12:printf("дванадц€те"); break;
    case 13:printf("тринадц€те"); break;
    case 14:printf("чотирнадц€те"); break;
    case 15:printf("п'€тнадц€те"); break;
    case 16:printf("шiстнадц€те"); break;
    case 17:printf("сiмнадц€те"); break;
    case 18:printf("вiсiмнадц€те"); break;
    case 19:printf("дев'€тнадц€те"); break;
    }
    case 2: switch (day - 20) {
    case 0:printf("двадц€те"); break;
    case 1:printf("двадц€ть перше"); break;
    case 2:printf("двадц€ть друге"); break;
    case 3:printf("двадц€ть третЇ"); break;
    case 4:printf("двадц€ть четверте"); break;
    case 5:printf("двадц€ть п'€те"); break;
    case 6:printf("двадц€ть шосте"); break;
    case 7:printf("двадц€ть сьоме"); break;
    case 8:printf("двадц€ть восьме"); break;
    case 9:printf("двадц€ть дев'€те"); break;
    }
    case 3: switch (day - 30) {
    case 0:printf("тридц€те"); break;
    case 1:printf("тридц€ть перше"); break;
    }
    }
    return 0;
}

int func_month(month)
{
    switch (month) {
    case 0: printf("“акого мiс€ц€ не iснуе "); break;
    case 1: printf(" сiчн€\n"); break;
    case 2: printf(" лютого\n"); break;
    case 3: printf(" березн€\n"); break;
    case 4: printf(" квiтн€\n"); break;
    case 5: printf(" травн€\n"); break;
    case 6: printf(" червн€\n"); break;
    case 7: printf(" липн€\n"); break;
    case 8: printf(" серпн€\n"); break;
    case 9: printf(" вересн€\n"); break;
    case 10: printf(" жовтн€\n"); break;
    case 11: printf(" листопада\n"); break;
    case 12: printf(" грудн€\n"); break;
    }
    return 0;
}