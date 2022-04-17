#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n] ;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=1;
    while(j<n){
    
        for(int i=0;i<n-j;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;}
    return 0;
}