#include<iostream>

using namespace std;

int max(int a,int b,int c){
    
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}

int min(int a,int b,int c){
    if(a>b){
        if(c>b){
            return b;
        }
        else{
            return c;
        }
    }
    else{
        if(a>c){
            return c;
        }
        else{
            return a;
        }
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int ans=max(a,b,c);
    int result=min(a,b,c);
    cout<<"max="<<ans<<endl;
    cout<<"min="<<result<<endl;
    return 0;
}