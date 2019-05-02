#include<iostream>
using namespace std;
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
void selectionSort(int arr[], int n)
{
int i, j, min_idx;
for (i = 0; i < n-1; i++)
{
min_idx = i;
for (j = i+1; j < n; j++)
if (arr[j] < arr[min_idx])
min_idx = j;

swap(&arr[min_idx], &arr[i]);
}
}
void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
cout<<arr[i]<<" ";
}
int main()
{
int i,s;
cout<<"Berapa nilai yang ingin anda inputkan?"<<endl;
cin>>s;
int arr[s];
for(i=0;i<s;i++)
{
cout<<"Angka ke -"<<i+1<<" : ";
cin>>arr[i];
}

int n = sizeof(arr)/sizeof(arr[0]);
selectionSort(arr, n);
cout<<"\n"<<endl;
cout<<"Sorted array: \n"<<endl;
printArray(arr, n);
return 0;
}
