#include <stdio.h>
#include <locale.h>
#include "date_in_wordsh.h" //çŕăîëîâíčé ôŕéë

void func_day(day)
{
    printf("Ďĺđĺňâîđĺíŕ äŕňŕ-->");
    switch (day / 10) {
    case 0:switch (day) {
    case 0:printf("Ňŕęîăî äí˙ íĺ ińíóĺ "); break;
    case 1:printf("ďĺđřĺ"); break;
    case 2:printf("äđóăĺ"); break;
    case 3:printf("ňđĺňş"); break;
    case 4:printf("÷ĺňâĺđňĺ"); break;
    case 5:printf("ď'˙ňĺ"); break;
    case 6:printf("řîńňĺ"); break;
    case 7:printf("ńüîěĺ"); break;
    case 8:printf("âîńüěĺ"); break;
    case 9:printf("äĺâ'˙ňĺ"); break;
    }
    case 1:switch (day) {
    case 10:printf("äĺń˙ňĺ"); break;
    case 11:printf("îäčíŕäö˙ňĺ"); break;
    case 12:printf("äâŕíŕäö˙ňĺ"); break;
    case 13:printf("ňđčíŕäö˙ňĺ"); break;
    case 14:printf("÷îňčđíŕäö˙ňĺ"); break;
    case 15:printf("ď'˙ňíŕäö˙ňĺ"); break;
    case 16:printf("řińňíŕäö˙ňĺ"); break;
    case 17:printf("ńiěíŕäö˙ňĺ"); break;
    case 18:printf("âińiěíŕäö˙ňĺ"); break;
    case 19:printf("äĺâ'˙ňíŕäö˙ňĺ"); break;
    }
    case 2: switch (day - 20) {
    case 0:printf("äâŕäö˙ňĺ"); break;
    case 1:printf("äâŕäö˙ňü ďĺđřĺ"); break;
    case 2:printf("äâŕäö˙ňü äđóăĺ"); break;
    case 3:printf("äâŕäö˙ňü ňđĺňş"); break;
    case 4:printf("äâŕäö˙ňü ÷ĺňâĺđňĺ"); break;
    case 5:printf("äâŕäö˙ňü ď'˙ňĺ"); break;
    case 6:printf("äâŕäö˙ňü řîńňĺ"); break;
    case 7:printf("äâŕäö˙ňü ńüîěĺ"); break;
    case 8:printf("äâŕäö˙ňü âîńüěĺ"); break;
    case 9:printf("äâŕäö˙ňü äĺâ'˙ňĺ"); break;
    }
    case 3: switch (day - 30) {
    case 0:printf("ňđčäö˙ňĺ"); break;
    case 1:printf("ňđčäö˙ňü ďĺđřĺ"); break;
    }
    }
    return 0;
}

void func_month(month)
{
    switch (month) {
    case 0: printf("Ňŕęîăî ěiń˙ö˙ íĺ ińíóĺ "); break;
    case 1: printf(" ńi÷í˙\n"); break;
    case 2: printf(" ëţňîăî\n"); break;
    case 3: printf(" áĺđĺçí˙\n"); break;
    case 4: printf(" ęâiňí˙\n"); break;
    case 5: printf(" ňđŕâí˙\n"); break;
    case 6: printf(" ÷ĺđâí˙\n"); break;
    case 7: printf(" ëčďí˙\n"); break;
    case 8: printf(" ńĺđďí˙\n"); break;
    case 9: printf(" âĺđĺńí˙\n"); break;
    case 10: printf(" ćîâňí˙\n"); break;
    case 11: printf(" ëčńňîďŕäŕ\n"); break;
    case 12: printf(" ăđóäí˙\n"); break;
    }
    return 0;
}
