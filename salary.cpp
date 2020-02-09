#include<stdio.h>
#include<stdlib.h>
void swap(long int* a,long int* b)
{
   long int t = *a;
    *a = *b;
    *b = t;
}

long int partition (long int arr[],long int low,long int high)
{
    long int pivot = arr[high];    // pivot
    long int i = (low - 1);
   long int j;// Index of smaller element

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(long int arr[],long int low,long int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        long int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main(){
long int t,n,m,cnt,i,j;

scanf("%ld",&t);
while(t--)
{
    scanf("%ld",&n);
    long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }

    quickSort(arr,0,n-1);
    cnt=0;
    while(arr[0]!=arr[n-1])
    {

        for(i=0;i<n-1;i++)
        {
            arr[i]+=1;

        }cnt++;
        for(i=0;i<n-1;i++)
        if(arr[i]>arr[n-1])
        {swap(&arr[i],&arr[n-1]);
		}

    }

    printf("%ld\n",cnt);}



    }






