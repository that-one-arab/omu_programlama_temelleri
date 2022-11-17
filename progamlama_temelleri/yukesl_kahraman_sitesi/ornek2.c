#include <stdio.h>
#include <conio.h>
#include <windows.h>

void clrscr() { system("CLS"); }

void gotoxy(short s, short k)
{
    COORD pos = {s, k};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
    clrscr();
    gotoxy(1, 2);
    printf("Satir Kolon Konumlu Ekranlar...");
    getch();
    return 0;
}