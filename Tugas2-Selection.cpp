
#include<iostream>
#include <string.h>
using namespace std;
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
void selectionSort(char nama[9][30])
{
for(int i=0;i<9;i++){

int j,bd;
j=i;
for(int k=i+1;k<9;k++)
{
bd=strcmp(nama[j],nama[k]);
if(bd==-1) j=k;       
}
if(j!=i){
char temp[1][30]; 
strcpy(temp[0],nama[j]);
strcpy(nama[j],nama[i]);
strcpy(nama[i],temp[0]);}
}

}

void printArray(char nama[9][30])
{
for (int i=0;i<9;i++){
cout<<nama[i]<<endl;
}
}
int main()
{
char nama [9][30];
strcpy(nama[0],"Wahyu");
strcpy(nama[1],"Yusril");
strcpy(nama[2],"Rahman");
strcpy(nama[3],"Yayat");
strcpy(nama[4],"Fadly");
strcpy(nama[5],"Desta");
strcpy(nama[6],"Syahrul");
strcpy(nama[7],"Ardian");
strcpy(nama[8],"Adhan");
int n = sizeof(nama)/sizeof(nama[0]);
selectionSort(nama);
cout<<"Sorted array: \n"<<endl;
printArray(nama);
return 0;
}
