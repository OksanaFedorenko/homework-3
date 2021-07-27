#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "./helpers/lib_strcmp.c"
#include "./helpers/lib_strlen.c"
#include "./helpers/allocate_memory.c"

void lib_strcpy(char *dest, const char *source)
{
    int i;

    for (i = 0; i <= lib_strlen(source); i++)
    {
        dest[i] = source[i];
    }
    dest[i] = '\0';
}

int main()
{
    char *short_string = "Hello World";
    char *long_string = "TdFCjHQk0GaohxZNyLHWbqy4lyFfoKsfBAYkEwmjHDYIpi392B";

     char len1 = lib_strlen(long_string);
    //char *buffer = malloc(lib_strlen(long_string) * sizeof(char));
    char *buffer2 = malloc(lib_strlen(long_string) * sizeof(char));

    char *buffer = allocate_memory(len1);

    lib_strcpy(buffer, long_string);
    strcpy(buffer2, long_string);

    int res = lib_strcmp(buffer, buffer2);

    if (res) {
      printf("Strings are not the same\n");
     } else {
      printf ("Strings are the same\n");
     }

    return 0;  
}

/* Подключаем заголовочные файлы стандартной библиотеки языка СИ
для ввода-вывода и работы со строками.

Создаем функцию mystrcpy, передаем два параметра - первый указывает куда записать результат 
(скопированную строку), второй - исходную строку. Поскольку параметр dest является указателем
и в него при вызове функции записывается адрес переменной buffer в памяти, то функция имеет
доступ к ячейке памяти, где хранится переменная buffer, и может записать в нее скопированную строку.
Поскольку предполагается, что исходная строка не меняется, то указатель на исходную строку - константа.

Цикл, проходясь по строке как по массиву символов, копирует строку пока не встретится
ноль-символ (ноль-терминатор), который тоже надо скопировать.*/


