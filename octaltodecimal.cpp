#include<iostream>

using namespace std;

int octaltodecimal(int n){
    int x=1;
    int ans=0;
    while(n>0){
        int lastdigit=n%10;
        ans+=x*lastdigit;
        x*=8;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;

    int ans=octaltodecimal(n);
    cout<<ans<<endl;

    return 0;
}