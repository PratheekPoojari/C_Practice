#include <stdio.h>
#include <time.h>

int sum_2d(int arr[10][10], int row, int col)
{
    int i, j, sum = 0;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main()
{
    int a[10][10], i, j, r, c;
    clock_t start, end;
    double time_taken;

    printf("Enter the total number of rows in the array:\n");
    scanf("%d", &r);
    printf("Enter the total number of columns in the array:\n");
    scanf("%d", &c);
    printf("Enter the values of the array.\n");
    
    start = clock();

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The values of the array are:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    int total = sum_2d(a, r, c); /* pass only the array name 'a', as it refers to the entire array. dont use a[r][c]
                                    or anything as such as they refer to a single element*/
    printf("The sum total of all the elements of the array is: %d\n", total);

    end = clock();
    time_taken = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Time taken: %lf seconds.\n", time_taken);

    return 0;
}
