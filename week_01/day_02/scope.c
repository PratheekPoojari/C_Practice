#include <stdio.h>

int counter = 100; //global variable

void show_global()
{
    printf("Inside show_global(), counter = %d\n", counter);
}

void shadow_demo()
{
    int counter = 5; //local variable that shadows the global variable
    printf("Inside shadow_dem(), counter = %d\n", counter);
}

void modify_global()
{
    counter += 1; //no local variable declared here, so it modifies the global variable
}

int main()
{
    printf("In main(), counter = %d\n", counter);

    show_global();
    shadow_demo();

    printf("After shadow_dem(), counter is still: %d\n", counter);

    modify_global();
    printf("After modify_global(), counter = %d\n", counter);

    //demonstrate block scope
    {
        int counter = -1;
        printf("Inside a block, counter = %d\n", counter);
    }

    printf("Outside the block, counter = %d\n", counter);

    return 0;

}
