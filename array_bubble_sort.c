#include<stdio.h>
int main()
{
  
  int a[100],i,n,j,temp;
  printf("How many elemetns ");
  scanf("%d",&n);
  printf("Enter the elements");
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("sorted elemts are:");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
