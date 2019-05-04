#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
int maxnum(int a,int b){
	if(a>b) return a;
	return b;
}
int minnum(int a,int b){
	if(a<b) return a;
	return b;
}

int main()
{
    int n;
    vector<int> v;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max=*max_element(v.begin(),v.end());
    int min=*min_element(v.begin(),v.end());

    int pos_min=INT_MAX;
    int pos_max=INT_MIN;

    for(int i=0;i<n;i++){
        if(v[i]==max){pos_min=minnum(pos_min,i);}
        if(v[n-1-i]==min){pos_max=maxnum(pos_max,n-1-i);}

    }
    if(pos_min<pos_max){
    	cout<<pos_min+n-pos_max-1;
    	
    	
    }else if(pos_min>pos_max)
	{
	    cout<<(pos_min+n-pos_max-2)<<endl;
	}

}

