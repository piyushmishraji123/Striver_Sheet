
#include <stdio.h>
void display();
int main()
{
    printf("Only stupid use C\n");
    display();
    return 0;
}
void display()
{
    printf("Fools use C\n");
    main();
}
