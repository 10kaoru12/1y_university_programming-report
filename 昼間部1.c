#include <stdio.h>
char *char_element3(char *str, char c)
{
    char *pc;
    while (*str != '\0')
    {
        if (*str == c)
        {
            pc = str;
            return pc;
        }
        str++;
    }
    return 0;
}
int main(void)
{
    char *string;
    char c;
    string = "ABCdefeg";
    c = 'e';
    printf("%p\n", char_element3(string, c));
    return 0;
}