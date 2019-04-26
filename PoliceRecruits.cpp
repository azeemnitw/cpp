#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int unto=0;
    stack<int> st;

    while(i<n)
    {
        int x;
        cin>>x;

        if(x<0){
            if(st.empty()){
                unto++;
            }
            else{
                st.top()-=1;
                if(st.top()==0)
                {
                    st.pop();
                }
            }
        }
        else if(x>0){
            st.push(x);
        }

        i++;
        

    }
    cout<<unto<<endl;
}