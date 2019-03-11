#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int A[100],n,temp,i,j;

    printf("Enter number of elements: \n");
    scanf("%d", &n);

    printf("Enter %d elements: ",n);
    for(i=0; i<n;i++)
    {
        scanf("%d",&A[i]);
    }

      for(i=1;i<n;i++)
      {
          temp=A[i];
          j=i-1;
          while(temp<A[j]&&j>=0)
          {
              A[j+1]=A[j];
              --j;
          }
          A [j+1]=temp;
      }
      printf("In ascending order: ");
      for(i=0;i<n;i++)
        printf("%d\t", A[i]);

    int k;
    for(k=0; k<n; k++);
    int count=clock();
    printf("Time: %f\n",(float)count/CLOCKS_PER_SEC);
    return 0;

}
