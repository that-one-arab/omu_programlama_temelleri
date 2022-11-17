
#include <stdio.h>
#include <conio.h>
main()

{

bsl:
    printf("\t\t\t\_Rcp_\t\t\t");
dvm:
    int r;
    for (r = 0; r <= 15; r++)
    {
        textbackground(7);
        textcolor(r);
        cprintf("\n Renk= %d", r);
    }
son:
    printf("\n\n Program Bitti...");
    getch();
}