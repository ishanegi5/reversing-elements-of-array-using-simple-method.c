#include<stdio.h>
void main()
{ int arr[]={134,256,3324,4234,5234};
for(int i=(sizeof(arr)/sizeof(arr[0]))-1;i>=0;i--)
{
    printf("%d ",arr[i]);
}
}