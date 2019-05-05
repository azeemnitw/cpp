#include<iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0){return a;}
    return gcd(b,a%b);
}

int checkWin(int a,int b,int n){
    int x=1;
    int p=0;

    while(n>=0){
        if(x%2){
            if(n==0){ p=1; return p;}
            n-=gcd(a,n);
            
        }else{
            if(n==0){p=0; return p;}
            n-=gcd(b,n);
        }
        x++;
    }

}

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    cout<<checkWin(a,b,n);

    
}