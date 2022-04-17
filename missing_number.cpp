#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int check[n];
    for(int i=0;i<n;i++){
        check[i]=0;
    }
    for(int i=1;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=1;
        }
        else{
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}