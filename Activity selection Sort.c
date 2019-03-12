#include<stdio.h>

void printMaxActivities(int s[], int f[], int n)
{
    int i, j;

    printf ("Following activities are selected n:\n\n");


    i = 0;
    printf("%d ", i);


    for (j = 1; j < n; j++)
    {

        if (s[j] >= f[i])
        {
            printf ("%d ", j);
            i = j;
        }
    }
}

int main()
{
    int s[] =  {1, 3, 7, 2, 10, 14};
    int f[] =  {5, 4, 9, 6, 12, 17};
    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}

