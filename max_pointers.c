/*Write a C program using pointers to find the biggest of the given elements stored in an array of n
numbers.*/
#include<stdio.h>

void Max(int a[], int len, int *max){
    *max=a[0];
    int i;
    for(i=1;i<len;i++){
        if(a[i] > *max)
        *max=a[i];
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max;
    int len=sizeof(a)/sizeof(a[0]);
    Max(a,len,&max);
    printf("The biggest element in the given array is : %d\n",max);

    return 0;
}