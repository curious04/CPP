#include<stdio.h>


int main()
{
    int n,max=-9999; 
    scanf("%d",&n);
    int FreqArr[100000],num;
    for(int i=0; i<n; i++) 
    scanf("%d",FreqArr[i]);
    
    int c=0;
    for(int i=0; i<n-1;i++)
    {
        if(FreqArr[i]==FreqArr[i+1]) 
        {
            c++;
        if(c>max)
        {
            max=c;
            num=FreqArr[i];
        }
        }
        else {c=0;}
    }
    printf("%d",num);

    return 0;
}