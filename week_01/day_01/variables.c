#include <stdio.h>
#include <string.h>

struct person
{
    char name[50];
    int age;
    int height_in_cm;
};

int main()
{
    int a, i;
    float b;
    char c;
    double d;
    unsigned int e;
    signed int f;

    a = 5;
    b = (22.0/7.0);
    c = 'C';
    char s[50] = "Hey Claude!";
    d = (22.0/7.0);
    e = 2123456789;
    f = -987654321;
    int g[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    struct person p1;

    strcpy(p1.name, "Pratheek");
    p1.age = 20;
    p1.height_in_cm = 170;

    int y = 256;
    int *p = &y;

    printf("int = %d\n", a);
    printf("float = %.10f\n", b);
    printf("char = %c\n", c);
    printf("string = %s\n", s);
    printf("double = %.15lf\n", d);
    printf("unsigned int = %u\n", e);
    printf("signed int = %i\n", f);

    printf("array 'g':\n");
    for(i=0; i<15; i++)
    {
        printf("%d\t", g[i]);
    }

    printf("\nThe structure p1 has values:\n Name: %s,  Age: %d,  Height: %d.\n", p1.name, p1.age, p1.height_in_cm);

    printf("y: %d\n",y);
    printf("pointer address: %p\n", p);
    printf("pointer value: %d\n", *p);

    return 0;
}
