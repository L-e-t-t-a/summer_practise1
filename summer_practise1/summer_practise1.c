/**
* @file summer_practise1
* @author Золотих-Ваніна В.О., гр. 515, варіант 28
* @date 1 липня 2022
* @brief Літня практика № 1
*
* Розробити програму, що переводить дату задану у вигляді двох цілих чисел, в текст українською мовою.
*/
#include <stdio.h>
#include <locale.h>

#include "date_in_wordsh.h" //заголовний файл



int main()
{
    setlocale(LC_CTYPE, "ukr");//зміна кодової таблиці символів
    int day, month;
    printf("Введiть дату у форматi хх уу: ");
    scanf_s("%d %d", &day, &month);
    if (day < 32 && day>0 && month > 0 && month < 13) //обмеження вводу чисел
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 && day < 32)func_day(day);
        else if (month == 2 && day < 30)func_day(day);
        else if (month == 4 || month == 6 || month == 9 || month == 11 && day < 31)func_day(day);
        else {
            printf("Така дата не iснує");
            return 0;
        }
        func_month(month);
    }
    else printf("Така дата не iснує");
    return 0;
}