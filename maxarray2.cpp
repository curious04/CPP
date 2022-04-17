#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        maxsum=max(maxsum,a[i]);
    }
    cout<<"maxsum"<<" "<<maxsum<<endl;
    return 0;
}