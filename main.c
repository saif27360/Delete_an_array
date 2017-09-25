#include <stdio.h>


int main()
{

int array[100],position,i,n;
printf("Enter number of elements in array");
scanf("%d",&n);
printf("Enter elements");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("Enter location u want to delete");
scanf("%d",&position);

if(position>=n+1)
printf("Deletion not possible.\n");
else{
for(i=position-1;i<n-1;i++)
array[i]=array[i+1];
for(i=0;i<n-1;i++)
printf("%d",array[i]);
}

    return 0;
}
