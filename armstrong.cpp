#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int originaln=n;
    int ans=0;
    while(n>0){
        int lastdigit=n%10;
        ans+=pow(lastdigit,3);
        n=n/10;
    }
    if(ans==originaln){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not Armstrong number"<<endl;
    }

    return 0;
}