#include <curses.h>
int main()
{
    char c,password[10];
    int i;
    while( (c=wgetch(stdscr))!= '\n')
    {
        password[i] = c;
        printf("*");
        i++;
    }
    return 1;
}