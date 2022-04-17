#include<iostream>

using namespace std;

int swap(int n){
    int result=0;
    while(n>0){
    int lastdigit=n%10;
    result=result*10+lastdigit;
    n=n/10;
    
    }
    return result;
}
int main(){
    int n;
    cin>>n;

    int ans=swap(n);
    cout<<ans<<endl;
    return 0;
}