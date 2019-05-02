#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
void merge(int arr[], int l, int m,
int r)
{
int i, j, k;
int n1 = m - l + 1;
int n2 = r - m;
int L[n1], R[n2];

for (i = 0; i < n1; i++)
L[i] = arr[l + i];
for (j = 0; j < n2; j++)
R[j] = arr[m + 1+ j];
i = 0;
j = 0;
k = l;
while (i < n1 && j < n2)
{
if (L[i] <= R[j])
{
arr[k] = L[i];
i++;
}
else
{
arr[k] = R[j];
j++;
}
k++;
}
while (i < n1)
{
arr[k] = L[i];
i++;
k++;
}
while (j < n2)
{
arr[k] = R[j];
j++;
k++;
}
}
void mergeSort(int arr[], int l, int r)
{
if (l < r)
{
int m = l+(r-l)/2;
mergeSort(arr, l, m);
mergeSort(arr, m+1, r);
merge(arr, l, m, r);
}
}
void printArray(int A[], int size)
{
int i;
for (i=0; i < size; i++)
cout<<A[i]<<" ";
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

int arr_size = sizeof(arr)/sizeof(arr[0]);
cout<<"\n Given array is \n"<<endl;
printArray(arr, arr_size);
mergeSort(arr, 0, arr_size -1);
cout<<""<<endl;
cout<<"Sorted array is \n"<<endl;
printArray(arr, arr_size);
return 0;
}
