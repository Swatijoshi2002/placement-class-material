
#include <stdio.h>

int main()
{
   int arr[]={11,12,2,3,4,5};
   int s=0;
   int e=6;
   int n=7;
   while(s<=e)
   {
       int mid=(s+e)/2;
       int next=(mid+1)%n;
       int prev=(mid+n-1)%n;
       if(arr[mid]<=arr[prev] && arr[mid]<=next)
       {
          printf("%d",mid);
         break;
       }
       if(arr[s]<=arr[mid])
       {
           s=mid+1;
       }
       else if(arr[mid]<=e)
       {
           e=mid+1;
       }
   }
   // printf("0");
   
}
