#include <stdio.h>

int positiveInterger(int a[], int n);
int positiveInterger(int a[], int n)
{
    int noOfpositiveinteger = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            noOfpositiveinteger++;
        }
    }
    return noOfpositiveinteger;
}

int main()
{
    int arr[] = {1, 2, 3, -4, 5, 6, 7, 8, -9, 10};
    printf("The total number of positive interger in array %d ", positiveInterger(arr, 10));
}