
#include <stdio.h>
#include <conio.h>
main()

{
    int a;
bsl:
    printf("\t\t\t\_Rcp_\t\t\t");
dvm:
    char kar = ' ';
    int say;
    for (say = 0; kar != 'x'; say++)
    {
        printf("\n %d Bir karakter giriniz: ", say);
        kar = getche();
    }
    getch();
son:
    printf("\n\n Program Bitti...");
    getch();
}
