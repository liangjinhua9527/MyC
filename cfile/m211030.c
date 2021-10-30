#include <m211030.h>

char * fruit()
{
    return "apple";
}
char * color()
{
    return "green";
}
void test(void)
{
    printf("The fruit is %s of %s\n",color(),fruit());
}


