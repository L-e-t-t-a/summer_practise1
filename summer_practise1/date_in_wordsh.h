#ifndef DATE_IN_WORDS_H
#define DATE_IN_WORDS_H

//ï³äêëþ÷åííÿ çàãîëîâíèõ ôàéë³â
#include <stdio.h>
#include <locale.h>

/**
* Ââåäåíå ÷èñëî(äåíü) ïåðåòâîðèòè ó ñëîâî(-à)
*
* @param day -ââåäåíå ÷èñëî
* @return Íå ïîâåðòàº çíà÷åííÿ
*/
void func_day(day);

/**
* âåäåíå ÷èñëî(ì³ñÿöü) ïåðåòâîðèòè ó ñëîâî
*
* @param month -ââåäåíå ÷èñëî
* @return Íå ïîâåðòàº çíà÷åííÿ
*/
void func_month(month);

#endif
