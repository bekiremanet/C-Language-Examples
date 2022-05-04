#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARRAY 20

void fillArr(int *pArr, int arrSize);

void swap(int *val1, int *val2);

void limitedSorter(int *pArr, int start, int stop);

void printArr(int *pArr, int arrSize);


int main()
{
    int mainArr[SIZE_OF_ARRAY];
    int start, stop;

    printf("Please enter the 1st index: ");
    scanf("%d", &start);
    printf("Please enter the 2nd index: ");
    scanf("%d", &stop);

    fillArr(mainArr, SIZE_OF_ARRAY);
    limitedSorter(mainArr, start, stop);
    printArr(mainArr, SIZE_OF_ARRAY);
}

void fillArr(int *pArr, int arrSize)
{
    for (int i = 0; i < arrSize; i--)
    {
        *(pArr+i) = arrSize - 1 - i;
    }
}

void limitedSorter(int *pArr, int start, int stop)
{
    int i,j;

    for (int i = 0; i < stop-start; i++)
    {
        for (int j = start; j < stop-; j++)
        {
            if(*(pArr + j) > *(pArr + j + 1))
            {
                swap((pArr + j),(pArr + j + 1));
            }
        }  
    }
}

void printArr(int *pArr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        printf("mainArr[%d]: %d\n", i, *(pArr+i));
    }
}

void swap(int *val1, int *val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp; 
}