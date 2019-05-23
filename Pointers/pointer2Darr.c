#include<stdio.h>
void main()
{
  int arr[3][3]={{12,15,20},{17,25,50},{11,10,8}};
  int i;
  printf("\nElements of two-dimensional array are\n\n");
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
          printf("%4df\t",*(*arr + i)+j));
  printf("\n");
}
