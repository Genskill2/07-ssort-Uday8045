#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

void swap_max(int arr[],int l,int n)
{
 int max_value=arr[n];
 int j=n;
 int i;
 for(i=n;i<=l-1;i++)
 {
  if( arr[i] > max_value)
  {
    max_value=arr[i];
    j=i;
  }
 }
 int t;
 t = arr[n];
 arr[n] = max_value;
 arr[j] = t;
}


void ssort(int a[],int len)
{
 int  i;
  
 for(i=0; i<len; i++)
   
   swap_max(a,len,i);
}
